
#include<iostream>
using namespace std;
const int N = 100010;
int arr[N];
int main()
{
    int idx=0;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x=0;
        cin>>x;
        while(idx&&arr[idx]>=x) idx--;//在栈中遇到大于当前元素的内容则大于的直接出栈，遇到大于的都可以直接出栈，目前元素一定是里下一个元素最近的元素
        if(idx) cout<<arr[idx]<<" ";//之前的元素如果满足条件（大于当前元素）就可以不用进行考虑
        else cout<<-1<<" ";
        arr[++idx] = x;
    }
}
