#include<iostream>
#include<map>
using namespace std;
map<string,int> maps;
char x[2];
int main()
{
    int n=0;
    cin>>n;
    string y;
    for(int i=0;i<n;i++)
    {
        scanf("%s",x);
        getline(cin,y);
        if(x[0]=='I')
        {
            maps[y]++;
        }
        else
        {
            cout<<maps[y]<<endl;
        }
    }

    return 0;
}