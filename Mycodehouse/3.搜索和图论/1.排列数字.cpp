#include<iostream>
using namespace std;
int n;
int q[11];bool T[11];
void dfs(int u)
{
    if(u>n)
    {
        for(int i=1;i<=n;i++)
        cout<<q[i]<<" ";
        cout<<endl;
        return;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(T[i]==false){
            T[i]=true;
            q[u] = i;
            dfs(u+1);
            T[i]=false;
        }
    }
    
    
}
int main()
{
    cin>>n;
    dfs(1);
}