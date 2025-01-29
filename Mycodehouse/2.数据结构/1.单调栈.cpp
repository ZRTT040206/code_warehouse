#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
const int N = 1e6+10;
int q[N];
stack<int> sta;
int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&q[i]);
    }
    cout<<"-1"<<" ";
    sta.push(q[0]);
    for(int i=1;i<n;i++)
    {
        while(!sta.empty())
        {
            if(q[i]>sta.top())
            {
                cout<<sta.top()<<" ";
                sta.push(q[i]);
                break;
            }
            else
            {
                if(!sta.empty())
                {
                    sta.pop();
                }
                if(sta.empty())
                {
                  cout<<"-1"<<" ";
                  sta.push(q[i]);
                  break;
                }
            }
        }
    }
    return 0;
}