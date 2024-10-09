#include<iostream>
using namespace std;
//特别数的和
int main()
{
    int n=0;
    int sums=0;
    cin>>n;
    for(int j=0;j<=n;j++)
    {
        int i=j;
        while(i)
        {
            if(i%10==2||i%10==0||i%10==1||i%10==9)
            {
                sums+=j;
                break;
            }
            i/=10;
        }
    }
    cout<<sums;
}