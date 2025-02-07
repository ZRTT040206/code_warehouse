#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 1e6+10;
int arr[N];
int r;
void down(int u)//dowm 函数的作用是对堆进行处理，使顶点为最大或最小值
{
    int t = u;
    if(u*2<=r&&arr[u*2]<arr[t]) t = u*2 ;
    if(u*2+1<=r&&arr[u*2+1]<arr[t]) t = u*2+1;
    if(t!=u)
    {
        swap(arr[t],arr[u]);
        down(t);
    }
}
int main()
{
    int n=0,m=0;
    cin>>n>>m;
    r = n;
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    for(int i=n/2;i>=1;i--)down(i);//n/2是一种优化策略，因为叶子节点无子节点，满足性质，可以直接从上层进行
    while(m--)//while为排序主要过程，将头节点和尾节点数值交换，长度减一，重新进行down操作
    {
        cout<<arr[1]<<' ';
        swap(arr[1],arr[r]);
        r--;
        down(1);
    }
    
}