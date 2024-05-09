/*#include<iostream>
using namespace std;
const int N = 100010;
int head=-1,idx,e[N],ne[N];
void Init_list()
{
    head = -1;
    idx = 0;
}
void adds(int x)
{
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}
void dele(int k)
{
    if(k==-1) head = ne[head];
    ne[k]=ne[ne[k]];
}
void inserts(int k,int x)
{
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}
int main()
{
    int n=0;
    Init_list();
    cin>>n;
    while (n -- ){
    
        char strs;
        cin>>strs;
        if(strs == 'H')
        {
            int x;cin>>x;
            adds(x);
        }
        else if(strs == 'D')
        {
            int k; cin>>k;
            dele(k-1);
        }
        else
        {
            int x,k;
            cin>>x>>k;
            inserts(x-1,k);
        }
        }
        for(int i= head;i!=-1;i = ne[i]) cout<<e[i]<<' ';
        return 0;
}*/