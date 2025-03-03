#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
typedef long long LL;
const int N=2e5+10;
LL a[N],b[N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];
    for(int i=1;i<=m;i++){
        LL t=0;
        for(int j=1;j<=n;j++){
            if(t>=b[i]) break;
            if(a[j]>t){
                LL d=a[j];
                a[j]+=min(b[i]-t,a[j]-t);
                t=d;
            }
        }
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<endl;
    return 0;
}
