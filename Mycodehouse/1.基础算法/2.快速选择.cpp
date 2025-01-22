#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 1e6+10;
int q[N];
int q_sort(int q[],int l,int r,int k)
{
    if(l==r) return q[l];
    int i=l-1,j=r+1;
    int temp = q[l+r>>1];
    while(i<j)
    {
        do i++; while(q[i]<temp);
        do j--; while(q[j]>temp);
        if(i<j) swap(q[i],q[j]);
    }
    
    int sl = j-l+1;
    
    if(k<=sl) return q_sort(q,l,j,k);
    return q_sort(q,j+1,r,k-sl);
    
}

int main()
{
    int n=0,k=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&q[i]);
    }
    cout<<q_sort(q,0,n-1,k);
    return 0;
}