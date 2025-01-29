#include<iostream>
using namespace std;
int gbc(int a,int b)
{
    if(!b) return a;
    return gbc(b,a%b);
}
int lcm(int a,int b)
{
    return (a/gbc(a,b)*b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gbc(a,b)<<endl;
    cout<<lcm(a,b)<<endl;
}
