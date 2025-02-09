#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int dx[5] = {0,1,0,-1,0};
int dy[5] = {0,0,-1,0,1};
char q[6][6],backg[6][6];
void turn(int x,int y)
{
    for(int i=0;i<5;i++)
    {
        int a = x+dx[i],b = y+dy[i];
        if(a>=0&&a<=5&&b>=0&&b<=5)
        {
            q[a][b]^=1;
        }
    }
}
int main()
{
    int n=0;
    cin>>n;
    int step = 0;
    while(n--)
    {
        for(int i=0;i<5;i++) cin>>q[i];
        int res = 100;
        memcpy(backg,q,sizeof q);
        for(int op=0;op<32;op++)
        {
            
            int step = 0;
            //不管亮灭，枚举32种可能性,确定第一层的一种，之后的解法都确定了
            for(int i=0;i<5;i++)//从00000~11111
            {
                if(op>>i&1)
                {
                    step++;
                    turn(0,i);
                }
            }
            //处理第二层到第四层，第五层不用处理
            for(int i=0;i<4;i++)
                for(int j=0;j<5;j++)
                    if(q[i][j]=='0')
                    {
                        step++;
                        turn(i+1,j);
                    }
            //如果第五层有灭的则无法还原  
            bool darks = false;
            for(int j=0;j<5;j++)
            {
                if(q[4][j]=='0')
                {
                    darks = true;
                    break;
                }
            }
            if(!darks) res = min(res,step);
            //还原现场，
           memcpy(q,backg,sizeof q);
        }
        if(res>6) res = -1;
        cout<<res<<endl;
    }
}