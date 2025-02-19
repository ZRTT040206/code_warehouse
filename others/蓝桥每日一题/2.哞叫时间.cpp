#include<iostream>
using namespace std;
const int N =20020;
const int M =30;
char s[N];
int cnt[M][M];
bool ts[M][M];
int n,k;
void resets(int l,int r,int v)
{
    l = max(0,l),r = min(r,n-1);
    for(int i=l;i+2<=r;i++)
    {
        char a = s[i],b = s[i+1],c = s[i+2];
        if(a!=b&&b==c) 
        {
            cnt[a][b]+=v;
            if(cnt[a][b]>=k) ts[a][b] = true;
        }
    }
}

int main()
{
    
    scanf("%d%d%s",&n,&k,s);
    for(int i=0;i<n;i++) s[i]-='a';
    resets(0,n-1,1);//第一次reset是计算原字符串中的每种符合条件的字符出现的次数
    for(int i=0;i<n;i++)
    {
        char a = s[i];
        resets(i-2,i+2,-1);//因为此处字符将被替换，所以提前减去当前符合条件的子串
        for(int j = 0;j<26;j++)
        {
            if(a!=j){
            s[i] = j;//字符串发生变化
            resets(i-2,i+2,1);//重新计算变化后的字符串中相同字符串的含量
            resets(i-2,i+2,-1);//每次变化都重新计算，删除上次字符串发生的变化后增加的数量
            }
        }
        s[i] = a;
        resets(i-2,i+2,1);//将字串加回来，还原现场
    }
    int res = 0;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(ts[i][j]) res++;
        }
    }
    cout<<res<<endl;
    
    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++)
            if(ts[i][j])
                printf("%c%c%c\n",i+'a',j+'a',j+'a');
    // cout<<bool(s[4]=='m');
    // printf("%d%d%s",n,k,s);
    return 0;
}