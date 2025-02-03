#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
const int N = 1e3+10;
typedef pair<int,int> PII;
int arr[N][N];
int brr[N][N];
queue<PII> que;
//最短路径问题
int n=0,m=0;
void bfs(int a,int b)
{
    que.push({1,1});
    int dx[4] = {0,1,0,-1};
    int dy[4] = {-1,0,1,0};
    while(!que.empty())
    {
        PII plays = que.front();//每一步遍历这个点附近的四个点，同时在这个点的基础上加1
        que.pop();
        for(int i=0;i<4;i++)
        {
            int x = dx[i]+plays.first;
            int y = dy[i]+plays.second;
            if(x!=0&&y!=0&&x<=n&&y<=m&&arr[x][y]!=1&&brr[x][y]==0)
            {
                brr[x][y] = brr[plays.first][plays.second]+1;//步数
                que.push({x,y});
                
            }
        }
    }
    cout<<brr[n][m];//所有点遍历完成后这个点就是最短路径
}

int main()
{
    
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&arr[i][j]);
            
    bfs(1,1);
    return 0;
}

