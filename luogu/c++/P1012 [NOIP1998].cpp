#include <iostream>
#include <algorithm>
using namespace std;
const int N =100010;
string arr[N];
int Tarr[N];
bool cmp(string s1,string s2) {
    return s1+s2>s2+s1;
}
int main() {
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++) {
        cout<<arr[i];
    }
}