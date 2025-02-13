#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int w,n,m;
    cin>>w>>n>>m;
    n--,m--;
    int x1 = n/w+1;//记录两个数的行号
    int x2 = m/w+1;
    int g_hang = abs(x2-x1);
    //如果行号为一奇一偶进行如下操作，将一行变为对应的镜像位置
    if(x1%2!=x2%2){
        n++,m++;//进行--计算过行号，所以要加回来，使用原始数据
        n = w*x1+w*(x1-1)+1-n;//镜像操作，计算一行的最大最小数的和，减去原来的数即为对称位置的数
        n--,m--;
    }
    g_hang+=abs(m-(n+w*(x2-x1)));//m,n都是奇数或偶数的情况，if操作后为通用计算
    cout<<g_hang;
    return 0;
}