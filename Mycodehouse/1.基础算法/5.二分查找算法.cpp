#include<iostream>
using namespace std;
const int N = 1000010;
int q[N];
int left_find(int x,int l,int r)
{
    
    while(l<r)
    {
        int mid = (l+r+1)>>1;
        if(x<q[mid]) r=mid-1;
        else l=mid;
    }
    if(q[l]!=x) return -1;
    return l;
}
int right_find(int x,int l,int r)
{
    while(l<r)
    {
        int mid = l+r>>1;
        if(x>q[mid]) l=mid+1;
        else r=mid;
    }
    if(q[l]!=x) return -1;
    return l;
}
void f_find(int x,int l,int r)
{
    cout<<right_find(x,0,r)<<" "<<left_find(x,0,r)<<endl;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&q[i]);
    }
    for(int i=0;i<k;i++)
    {
        int finds=0;
        scanf("%d",&finds);
        f_find(finds,0,n-1);
    }
}