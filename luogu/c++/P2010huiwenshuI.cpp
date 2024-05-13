#include<iostream>
using namespace std;
string s[2];
int first,last;
int ans;
int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int firast_months[2]={0};
int firast_days[2] = {0};
bool panduan(int Year)
{
    if((Year%4==0 && Year%100!=0)||(Year%400==0)) return true;
    return false;
}
bool hui_wen(int Year)
{
    if(panduan(Year)) arr[2] = 29;
    else arr[2] = 28;
    int Year_s = Year;
    int reserves =0;
    while(Year_s)
    {
        reserves += Year_s%10;
        Year_s/=10;
        reserves*=10;
    }
    reserves/=10;
    int months=0;
    int days=0;
    days=reserves%100;
    months = reserves/100;
    //printf("%d %d",months,days);
    //cout<<reserves/10;
    if(months<=12&&arr[months]>=days)
        return true;
    else
        return false;
}
int main()
{
    cin>>s[0]>>s[1];
    for(int i=0;i<4;i++)
    {
        first +=s[0][i] + '\0' - 48;
        last += s[1][i] + '\0' - 48;
        first *=10, last*=10;
    }
    first /= 10, last/=10;
        /*cout<<firast_months[0]<<endl;
        cout<<firast_months[1]<<endl;
        cout<<firast_days[0]<<endl;
        cout<<firast_days[1]<<endl;*/
    //cout<<first<<' '<<last;
    for(int i=first;i<=last;i++)
    {
        if(hui_wen(i)) ans++;
    }
    cout<<ans;
}