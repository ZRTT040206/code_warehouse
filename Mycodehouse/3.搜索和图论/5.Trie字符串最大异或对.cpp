#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100010;
//保存 Trie 树
int son[N * 31][2];  
int n, idx;

void insert(int x)
{
    int p = 0;//初始化指向根节点
    //从最高位开始，依次取出每一位
    for (int i = 31; i >= 0; i--)
    {   // 取出当前位
        int u = x >> i & 1;
         //如果树中不能走到当前数字
        //为当前数字创建新的节点，保存该数字
        if (!son[p][u])
            // 新节点编号为 idx + 1
            son[p][u] = ++idx; 
        p = son[p][u];
    }
}

int query(int x)
{
    //指向根节点
    int p = 0;
    // 保存与 x 异或结果最大的那个数
    int ret = 0;
     //从最高位开始，依次取出 x 的每一位
    for (int i = 31; i >= 0; i--)
    {
        // 取出 x 的当前位
        int u = x >> i & 1;
        //如果树中能走到 !u，就走到!u
        if (son[p][!u]){
            //走到!u
            p = son[p][!u];
            //更新 x 异或的对象
            ret = ret * 2 + !u;
        }  
        //没有!u，就只能走到u了
        else{
            p = son[p][u];
            //更新 x 异或的对象
            ret = ret * 2 + u; 
        }
    }
    //计算异或结果
    ret = ret ^ x;
    return ret;
}

int main()
{
    cin >> n;
    int maxXorNum = 0; 
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        insert(x);
        maxXorNum = max(maxXorNum, query(x));
    }

    cout << maxXorNum << endl;

    return 0;
}