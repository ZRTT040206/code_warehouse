#include<iostream>
using namespace std;
string a,b;
void turn(int i)
{
    if(a[i] = '*') a[i] = 'o';
    else a[i] = '*';
}
int main()
{
    cin>>a>>b;
    int n=a.size();
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=b[i])
        {
            cnt++;
            turn(i),turn(i+1);
        }
        
    }
    cout<<cnt<<endl;
    return 0;
}