#include<iostream>
#include<cmath>
using namespace std;
int arr[100010];
//1210 连号数区间
int main()
{
    int n=0;
    cin>>n;
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int maxs=0,mins=1e4+10;
        for(int j=i;j<n;j++)
        {
            maxs = max(maxs,arr[j]);
            mins = min(mins,arr[j]);
            if(maxs-mins==j-i)
            {
                res++;
            }
        }
    }
    cout<<res;
}