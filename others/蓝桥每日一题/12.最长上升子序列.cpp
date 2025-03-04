#include<iostream>
using namespace std;
const int N = 1010;
int w[N],f[N];
int main()
{
    int n=0;
    cin>>n;
    for(int i=1;i<=n;i++) scanf("%d",&w[i]);
    
    int maxs=-1;
    for(int i=1;i<=n;i++)
    {
        f[i] = 1;
        for(int j=1;j<=i;j++)
        {
            if(w[j]<w[i]) f[i] = max(f[i],f[j]+1);
        }
        maxs = max(f[i],maxs);
    }
    cout<<maxs;
    return 0;
}