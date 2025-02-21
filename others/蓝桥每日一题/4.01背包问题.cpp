#include<iostream>
using namespace std;
const int N = 1010;
//背包问题，
int v[N],w[N];
int f[N];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d %d",&v[i],&w[i]);
    
    for(int i=1;i<=n;i++)//i为考虑当前第i个物品
        for(int j=m;j>0;j--)//  两种情况，选择此物品和不选此物品
        {
            if(j<v[i])
                f[j] = f[j];  //装不进去第i个物品
            else
                f[j] = max(f[j],f[j-v[i]]+w[i]);//体积为j的时候-v[i]
                            //j-v[i]表示装入第i个物体后的情况，如果能装入前几个物体                
            
        }
    cout<<f[m];
    return 0;
}