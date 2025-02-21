#include<iostream>
using namespace std;
const int N = 1010;
int dp[N][N];
int nums[N][N];
int main()
{
    int n=0;
    cin>>n;
    while(n--)
    {
        int row,col;
        scanf("%d %d",&row,&col);
        for(int i=1;i<=row;i++)
            for(int j=1;j<=col;j++)
                scanf("%d",&nums[i][j]);
        
        for(int i=1;i<=row;i++)
            for(int j=1;j<=col;j++)
                {
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j])+nums[i][j];
                    //走到第i，j的总价值为之前走过的左或右的更大的价值+当前格子的价值
                }
        
        cout<<dp[row][col]<<endl;
    }
    return 0;
}