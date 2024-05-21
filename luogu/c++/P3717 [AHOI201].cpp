#include<iostream>
#include<cmath>
using namespace std;
int arr[110][110];
int sums;
int main() {
    int n,m,r;
    int x,y;
    cin>>n>>m>>r;
    for(int k=0;k<m;k++){
        cin>>x>>y;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(r>=sqrt(pow(x-i,2)+pow(y-j,2))) arr[i][j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(arr[i][j]==1) sums++;
        }
    }
    cout<<sums;
}