//并查集是用来处理集合合并和询问两个集合是否在一个集合中
#include<iostream>
using namespace std;
const int N =1e6+10;
int q[N];
int find(int x)
{
    if(q[x]!=x) q[x] = find(q[x]);
    return q[x];
}
int main()
{
    char p[2];
    int n=0,m=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)q[i] = i;
    int a=0,b=0;
    while(m--)
    {
        scanf("%s%d%d",p,&a,&b);
        if(p[0]=='M') q[find(a)] = find(b);
        else
        {
            if(find(a)==find(b)) printf("Yes\n");
            else printf("No\n");
        }
        
    }
}