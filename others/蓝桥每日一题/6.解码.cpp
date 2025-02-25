#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            int a = s[i]-'0';
            a--;
            while(a--)
            {
                cout<<s[i-1];
            }
        }
        else
        {
            cout<<s[i];
        }
    }
    
    return 0;
}