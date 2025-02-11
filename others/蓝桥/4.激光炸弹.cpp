#include<iostream>
using namespace std;
const int N = 5010;
int q[N][N];
//维护前缀和
int main()
{
    int n,k;
    cin>>n>>k;
    int dx=0,dy=0;
    k = min(k,5001);//
    dx=dy=k;//这两步主要是防止x或y==0时进不去循环
    for(int i=1;i<=n;i++)
    {
        int x,y,val;
        scanf("%d%d%d",&x,&y,&val);
        x++,y++;
        q[x][y] += val;
        dx = max(x,dx);
        dy = max(y,dy);
    }
    
    for(int i=1;i<=dx;i++)
        for(int j = 1;j<=dy;j++)
        {
            q[i][j]+=q[i-1][j]+q[i][j-1]-q[i-1][j-1];
        }
    int res = 0;
    
        for(int i=k;i<=dx;i++)//从右下角（即k的位置）开始进行计算
            for(int j=k;j<=dy;j++)
            {
                    res = max(res,q[i][j]-q[i-k][j]-q[i][j-k]+q[i-k][j-k]);
            }
    cout<<res;
    return 0;
}