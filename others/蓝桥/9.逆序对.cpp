#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
//又写了一遍
const int N =1e6+10;
int q[N],temp[N];
long long counts;
void s_sort(int q[],int l,int r)
{
    if(l>=r) return;
    int mid = l+r>>1;
    s_sort(q,l,mid),s_sort(q,mid+1,r);
    int i = l,j = mid+1,k=0;
    while(i<=mid&&j<=r)
    {
        if(q[i]<=q[j]) temp[k++] = q[i++];
        else{
                temp[k++] = q[j++];
                counts+=mid-i+1;
            }
    }
    while(i<=mid) temp[k++] = q[i++];
    while(j<=r) temp[k++] = q[j++];
    for(int i=l,j=0;i<=r;i++,j++) q[i] = temp[j];
}
int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&q[i]);
    }
    s_sort(q,0,n-1);
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",q[i]);
    // }
    printf("%lld",counts);
    return 0;
}