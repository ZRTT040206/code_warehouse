#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int N = 100010;
int arr[N],brr[N],crr[N];
int as[N],cs[N];
int hashs[N],s[N];
long long ans;
//递增三元组

int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i],arr[i]++;
    for(int i=0;i<n;i++) cin>>brr[i],brr[i]++;
    for(int i=0;i<n;i++) cin>>crr[i],crr[i]++;
    
    //求哈希数组并求前缀和
    for(int i=0;i<n;i++) hashs[arr[i]]++;            //哈希表映射
    for(int i=1;i<N;i++) s[i]=hashs[i]+s[i-1];       //存储每一个区间的数有多少
    for(int i=0;i<n;i++) as[i] = s[brr[i]-1];         //求小于b[i]的数的数量
    memset(hashs,0,sizeof(hashs));
    memset(s,0,sizeof(s));
    
    for(int i=0;i<n;i++) hashs[crr[i]]++;            //哈希表映射
    for(int i=1;i<N;i++) s[i]=hashs[i]+s[i-1];       //存储每一个区间的数有多少
    for(int i=0;i<n;i++) cs[i] = s[N-1]-s[brr[i]];    //求大于b[i]的数的数量
    
    
    for(int i=0;i<n;i++) ans+=(long long)as[i]*cs[i];
    
    printf("%lld",ans);
    
    return 0;
}