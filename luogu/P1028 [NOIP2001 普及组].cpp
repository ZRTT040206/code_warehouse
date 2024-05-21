#include<iostream>
#include<algorithm>
using namespace std;
int n;
int arr[1001];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i/2;j++){
            arr[i]+=arr[j];
        }
        arr[i]++;
    }
    cout<<arr[n];
    return 0;
}