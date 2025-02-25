#include<iostream>
using namespace std;
int main()
{
    long long tim;
    scanf("%lld",&tim);
    tim/=1000;
    int h =tim/3600%24;
    int m= tim%3600/60;
    int s = tim%60;
    if(h>=10) cout<<h<<':';
    else cout<<"0"<<h<<':';
    if(m>=10) cout<<m<<':';
    else cout<<"0"<<m<<':';
    if(s>=10) cout<<s;
    else cout<<"0"<<s;
    
    
}