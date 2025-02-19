#include<iostream>
using namespace std;
const int N = 1010;
int q1[N][N],q2[N][N],q3[N][N];
int cnt;
//贡献法，每挖去一次方块计算三个方向的挖去物块数量，xy,yz,xz，二维模拟三维
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        q1[a][b]++;
        q2[b][c]++;
        q3[a][c]++;
        if(q1[a][b]>=n) cnt++;
        if(q2[b][c]>=n) cnt++;
        if(q3[a][c]>=n) cnt++;
        cout<<cnt<<endl;
    }
    
    return 0;
}