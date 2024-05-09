#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 100010;
int idx,e[N];
void Init_sta()
{
    idx=0;
}
void My_push(int m)
{
    e[idx]=m;
    idx++;
}
void My_pop()
{
    idx--;
}
void My_empty()
{
    if(idx==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int My_query()
{
    return e[idx-1];
}
int main()
{
  int n=0;
  cin>>n;
  Init_sta();
  while(n--){
    string s;
    cin>>s;
    if(!s.compare("push"))
    {
        int m=0;
        cin>>m;
        My_push(m);
    }
    else if(!s.compare("pop"))
    {
        My_pop();
    }
    else if(!s.compare("empty"))
    {
        My_empty();
    }
    else
    {
        cout<<My_query()<<endl;
    }
  }
  return 0;
}