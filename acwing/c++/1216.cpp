#include<iostream>
using namespace std;
int sums=0;
//饮料换购问题
int main()
{
    int n=0;
    cin>>n;
    sums+=n;
    while(n>=3)
    {
        sums+=n/3;
        n=n/3+n%3;
    }
    cout<<sums;
}