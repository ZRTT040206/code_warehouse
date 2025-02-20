#include<iostream>
using namespace std;
//使用前缀和+双指针解决,求小于k的子矩阵的数量
const int N = 1010;
int q[N][N];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>q[i][j];
            q[i][j]+=q[i-1][j]+q[i][j-1]-q[i-1][j-1];
            //cout<<q[i][j]<<" ";
        }
        //cout<<endl;
    }
    long long  cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)                          
        {
            int l = 1;
            for(int r=1;r<=m;r++)
            {
                while(l<=r&&q[j][r]-q[j][l-1]-q[i-1][r]+q[i-1][l-1]>k)l++;
            if(l<=r)cnt+=r-l+1;//+1是因为l和r在同一列的情况依然有一个答案
            }
        }
    }
    cout<<cnt;
    return 0;
}