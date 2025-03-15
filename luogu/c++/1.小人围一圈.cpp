#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<utility>
#include<string>
using namespace std;

typedef pair<int, string> PII;
const int N = 1e5+10;
PII nums[N];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i].first);//0为圈内，1为
        cin >> nums[i].second;
    }
    int sub=0;
    while(m--)
    {
          int x,y;//x为0表示左数
          scanf("%d %d",&x,&y);
          if((nums[sub].first==0&&x==0)||(nums[sub].first==1&&x==1))//向内左数是--
          {
               sub = (sub+(n-y))%n;
          }
          else//这一段是++的
          {
               sub = (sub+y)%n;
          }
     }
     cout<<nums[sub].second;
    return 0;
}
