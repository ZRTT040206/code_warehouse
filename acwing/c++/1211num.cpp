#include<iostream>
#include<cmath>
using namespace std;
//1211.蚂蚁问题
int main()
{
    int n=0,s=0,a=0;   
    int l=0,r=0;
    cin>>n;
    cin>>a;
    for(int i=0;i<n-1;i++)
    {
        cin>>s;
        if(abs(a)<abs(s)&&s<0) l++;
        if(abs(a)>abs(s)&&s>0) r++;
    }
    if((a>0&&l==0)||(a<0&&r==0))
    {
        cout<<"1";
        return 0;
    }
    cout<<l+r+1;
}