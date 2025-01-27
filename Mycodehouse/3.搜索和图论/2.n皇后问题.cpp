#include<iostream>
using namespace std;
const int N = 20;
int n=0;
char que[N][N];
bool col[N],dg[N],udg[N];
void dfs(int u)
{
    if(u>=n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%c",que[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!col[i]&&!dg[u+i]&&!udg[n-u+i])
        {
            que[u][i] = 'Q';
            col[i]=dg[u+i]=udg[n-u+i]=true;
            dfs(u+1);
            col[i]=dg[u+i]=udg[n-u+i]=false;
            que[u][i] = '.';
        }
    }
}

int main()
{
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            que[i][j]='.';
        }
    }
    dfs(0);
}