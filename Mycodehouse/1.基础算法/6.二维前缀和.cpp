#include<iostream>
#include<vector>
using namespace std;
const int N = 1e3+10;
// vector<vector<int>> temp,q;
int q[N][N],temp[N][N];
void add(int x1,int x2,int y1,int y2)
{
    cout<<temp[x2][y2]-temp[x1-1][y2]-temp[x2][y1-1]+temp[x1-1][y1-1]<<endl;
}
int main()
{
    int n,p,k=0;
    scanf("%d%d%d",&n,&p,&k);
    //temp.resize(n,vector<int>(p,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=p;j++)
        {
            scanf("%d",&q[i][j]);
            temp[i][j] = q[i][j]+temp[i-1][j]+temp[i][j-1]-temp[i-1][j-1];
        }
    }
    int x1,x2,y1,y2;
    for(int i=1;i<=k;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        add(x1,x2,y1,y2);
    }
    return 0;
}