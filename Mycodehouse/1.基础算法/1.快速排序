#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 1e6+10;
int arr[N];
void q_sort(int q[],int l,int r)
{
    if(l>=r) return;
    int i=l-1,j=r+1;
    int temp = q[l+r>>1];
    while(i<j)
    {
        do i++; while(q[i]<temp);
        do j--; while(q[j]>temp);
        if(i<j) swap(q[i],q[j]);
    }
    q_sort(q,l,j);
    q_sort(q,j+1,r);
    
}
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    q_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}