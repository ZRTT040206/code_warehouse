#include<iostream>
using namespace std;  
int n=0;
bool path[11];
int arr[11];
void dfs(int u)
{
    if(u>n){
        for(int i=1;i<=n;i++)
            cout<<arr[i]<<' ';
        cout<<endl;
        return ;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(!path[i])
        {
            path[i] = true;
            arr[u] = i;
            dfs(u+1);
            path[i] = false;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}