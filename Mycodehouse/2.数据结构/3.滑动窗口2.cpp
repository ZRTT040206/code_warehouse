#include<iostream>
#include<deque>
using namespace std;
const int N = 1e6+10;
int q[N];//存储需要处理的数据
deque<int> deq;//使用双端队列存储下标
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&q[i]);
    }
    for(int i=1;i<=n;i++)
    {
        while(!deq.empty()&&q[i]<deq.back())
        {
            deq.pop_back();
        }
        deq.push_back(q[i]);
        if(i-k>=1&&q[i-k]==deq.front())
        {
            deq.pop_front();
        }
        if(i>=k) cout<<deq.front()<<" ";
    }
    deq.clear();
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
       while(!deq.empty()&&q[i]>deq.back())
        {
            deq.pop_back();
        }
        deq.push_back(q[i]);
        if(i-k>=1&&q[i-k]==deq.front())
        {
            deq.pop_front();
        }
        if(i>=k) cout<<deq.front()<<" "; 
    }
}