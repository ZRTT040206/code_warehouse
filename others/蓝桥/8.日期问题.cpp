#include<iostream>
using namespace std;
int days[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
//将日期转为整数，进行有限次循环判断解决
bool check(int year,int month,int day)
{   
    if(month<=0||month>12) return false;
    if(((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) days[2] = 29;
    if(days[month]<day||day<=0)return false;
    return true;
}
int main()
{
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
    for(int i=19600101;i<=20591231;i++)
    {
        int year = i/10000,day = i%100;
        int month = i%10000/100;
        // cout<<check(year,month,day);
        if(check(year,month,day))
        {
            if((year%100==a&&month==b&&day==c)||(month==a&&day==b&&year%100==c)||(day==a&&month==b&&year%100==c))
            {
                printf("%d-%02d-%02d\n",year,month,day);                
            }
        }
        days[2] = 28;
    }
}