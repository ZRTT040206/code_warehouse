#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int month[13] = {-1,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int cnt =0;
    for(int mon=1;mon<=12;mon++)
    {
        for(int day=1;day<=month[mon];day++)
        {
            int year = (day%10)*1000+day/10*100+(mon%10)*10+mon/10*1;
            int date = year*10000+mon/10*1000+mon%10*100+day/10*10+day%10;
            if(a<=date&&b>=date) cnt++;
        }
    }
 cout<<cnt;   
}