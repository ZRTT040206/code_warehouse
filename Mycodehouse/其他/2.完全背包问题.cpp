#include<iostream>
using namespace std;
const int N = 1010;
int v[N],w[N];
int f[N][N];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d %d",&v[i],&w[i]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(j<v[i]) f[i][j] = f[i-1][j];
            else
            {
                f[i][j] = max(f[i-1][j],f[i][j-v[i]]+w[i]);
            }
        }
        cout<<f[n][m];
}