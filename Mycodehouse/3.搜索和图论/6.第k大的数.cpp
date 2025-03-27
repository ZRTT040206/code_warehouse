#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 5e6+10;
int q[N];
int q_sort(int l,int r,int m)
{
     if(l>=r) return q[l];
     int mid = q[l+r>>1];
     int i=l-1,j = r+1;
     while(i<j)
     {
          do i++;while(q[i]<mid);
          do j--;while(q[j]>mid);
          if(i<j)
          {
               swap(q[i],q[j]);
          }
     }

     if(j-l+1>=m) q_sort(l,j,m);
     else q_sort(j+1,r,m-j+l-1);
}
int main()
{
     int n=0,m;
     scanf("%d %d",&n,&m);    
     for(int i=0;i<n;i++)
     {
          scanf("%d",&q[i]);
     }
    cout<< q_sort(0,n-1,m);
     // for(int i=0;i<n;i++)
     // {
     //      cout<<q[i];
     // }
}