#include<iostream>
using namespace std;
int main()
{
    double sums;
    int maxs=-1,mins=110;
    int n=0;
    cin>>n;
    int m = n;
    while(n--)
    {
        int a;
        scanf("%d",&a);
        maxs = max(a,maxs);
        mins = min(a,mins);
        sums+=a;
    }
    printf("%d\n%d\n%.2lf",maxs,mins,sums/m);
    return 0;
}