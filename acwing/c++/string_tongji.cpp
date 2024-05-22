#include<map>
#include<iostream>
using namespace std;
map<string,int> arr;
string s2;
void insert(string x)
{
    arr[x]++;
}
int counts(string x)
{
   return arr[x];
}
int main()
{
    char s1;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s1;
        if(s1 =='I')
        {
            cin>>s2;
            insert(s2);
        }
        else 
        {
            cin>>s2;
            cout<<counts(s2)<<endl;
        }
    }
}
//第二种写法 使用模拟trie树
/*#include<iostream>
using namespace std;
const int N = 100010;
int arr[N][26],idx;
int cnt[N];
char str[N];
void insert(char str[])
{
    int p=0;
    for(int i=0;str[i];i++)
    {
        int u = str[i] - 'a';
        if(!arr[p][u]) arr[p][u] = ++idx;
        p = arr[p][u];
    }
    cnt[p]++;
}
int finds(char str[])
{
    int p=0;
    for(int i=0;str[i];i++)
    {
        int u = str[i] - 'a';
        if(!arr[p][u]) return 0;
        p = arr[p][u];
    }
    return cnt[p];
}
int main()
{
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char s[2];
        scanf("%s%s",s,str);
        if(s[0]=='I')
        {
            insert(str);
        }
        else{
         cout<<finds(str)<<endl;
        }
    }
}*/