#include<iostream>
using namespace std;
const int N = 1e6+10;
//前缀和+哈希表，具体什么问题我再研究，看不懂了
long long q[N],cnt[N];
int main()
{
    int n=0,k=0;
    cin>>n>>k;
   for(int i=1;i<=n;i++)
   {
        q[i]+=q[i-1];
   }
   long long res = 0;
   cnt[0]==1;
   for(int i=0;i<n;i++)
   {
        res+=cnt[q[i]%k];
        cnt[q[i%k]]++;
   }
   cout<<res;
}

