#include<iostream>
using namespace std;
const int N = 1e6+10;
int q[N];
int temp[N];
void add(int n)
{
    temp[0] = q[0];
    for(int i=1;i<=n;i++)
    {
        temp[i] = q[i]+temp[i-1];
    }
}
int main()
{
    int n=0,k=0;
    cin>>n>>k;
    q[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&q[i]);
    }
    add(n);
    for(int s=1;s<=k;s++)
    {
        int i,j;
        scanf("%d%d",&i,&j);
        cout<<temp[j]-temp[i-1]<<endl;
    }
}