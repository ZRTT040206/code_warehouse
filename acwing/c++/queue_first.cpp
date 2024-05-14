/*
#include<iostream>
using namespace std;
int arr[1000010];
int idx_first=0;
int idx_last=0;
void Mypush(int x)
{
    arr[idx_last] = x;
    idx_last++;
}
void Mypop()
{
    idx_first++;
}
void My_empty()
{
    if(idx_first>=idx_last) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;;
}
void My_query()
{
    cout<<arr[idx_first]<<endl;
}
int main()
{
    int n=0;
    cin>>n;
    while (n -- )
    {
        string s;
        cin>>s;
        if(s == "push")
        {
            int x;
            cin>>x;
            Mypush(x);
        }
        else if(s =="pop")
        {
            Mypop();
        }
        else if(s== "empty")
        {
            My_empty();
        }
        else
        {
            My_query();
        }
    }
}
*/