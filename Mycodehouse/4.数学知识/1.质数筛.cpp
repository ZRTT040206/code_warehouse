#include<iostream>
using namespace std;
const int N = 1e6+10;
bool q[N];//非线性的质数筛
int shai(int n)
{
    int cnt=0;
    for(int i=2;i<=n;i++)
    {
        if(!q[i])
        {
            cnt++;
            for(int j=i;j<=n;j+=i)
            {
                q[j] = true;
            }
        }
    }
    return cnt;
}
int main()
{
    int n=0;
    cin>>n;
    cout<<shai(n);
    return 0;
}