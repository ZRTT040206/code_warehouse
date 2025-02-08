#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
typedef pair<int,int> PII;
vector<PII> q;
bool cmp(PII &a,PII&b)//主要是这个结构体排序的问题
{
    if(a.first!=b.first) 
        return a.first<b.first;
    return a.second<b.second;
}
int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        q.push_back({a,b});
    }
    sort(q.begin(),q.end(),cmp);
    int a = q[0].first,b = q[0].second;
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        if(q[i].first>b)
        {
            cnt++;
            a = q[i].first,b = q[i].second;
        }
        else
        {
            
            b = max(q[i].second,b);
        }
    }
    cout<<cnt;
}