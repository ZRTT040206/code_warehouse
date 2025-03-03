#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int months[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
int run(int date)
{
    int year = date / 10000;
    int month = date % 10000 / 100;
    int day = date % 100;
    if(!day || month < 0 || month > 12 ) return false;
    if(month != 2 && day >months[month]) return false;
    if(month == 2)
    {
        if((year%4==0&&year%100!=0)||(year%400==0)) //闰年特判
        {
            if(day > 29) return false;
        }
        else 
        {
            if(day > 28) return false;
        }
    }
    return true;
}
bool check1(string date)
{
    int i=0,j=7;
    while(i<j)
    {
        if(date[i++]!=date[j--]) return false;
    }
    return true;    
}
bool check2(string  date)
{
   if(check1(date))
   {
       if(date[0]==date[1]||date[0]!=date[2]||date[1]!=date[3]) return false;
       return true;
   }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    bool flag;
    for(int i=n+1;;i++)
    {
        
        if(run(i))
        {
            string s = to_string(i);
            if(check1(s)&&!flag)
            {
                cout<<i<<endl;
                flag = 1;
            }
            if(check2(s))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}