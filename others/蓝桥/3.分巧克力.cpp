#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
//经典的二分问题 
const int  N = 1e6+10;
int H[N],W[N];
int n,m=0;
bool check(int mid)
{
    int cnts=0;
    for(int i=0;i<n;i++)
    {
        cnts+=H[i]/mid*(W[i]/mid);//mid为分成的边长
    }
    if(cnts>=m) return true;
    return false;
}

int main()
{
    
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d%d",&H[i],&W[i]);
    
    int l=0,r = 1e5;
    while(l<r)
    {
        int mid = l+r+1>>1;
        if(check(mid)) l = mid;
        else r = mid-1;
        
    }
    printf("%d",r);
    return 0;
}