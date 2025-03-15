#include<iostream>
using namespace std;
const int N = 1e6+10;
int q[N];
int cnt[N];         
int find(int x);
char op[3];
int find(int x)
{
    if(x!=q[x]) q[x] = find(q[x]);
    return q[x];
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        q[i]=i;
        cnt[i]=1;
    }
    while(m--)
    {
        
        int a,b;
        scanf("%s",op);
        if(op[0]=='C')
        {
            scanf("%d%d",&a,&b);
            if(find(a)==find(b)) continue;
            cnt[find(a)]+=cnt[find(b)];
            q[find(b)] = find(a);
        }
        else
        {
            if(op[1]=='1')
            {
                scanf("%d%d",&a,&b);
                if(find(a)==find(b))puts("Yes");
                else puts("No");
            }
            else
            {
                scanf("%d",&a);
                cout<<cnt[find(a)]<<endl;
            }
        }
    }
    
    return 0;
}