
#include<iostream>
using namespace std;
const int N = 100010;
int arr[N];
int main()
{
    int idx=0;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x=0;
        cin>>x;
        while(idx&&arr[idx]>=x) idx--;//��ջ���������ڵ�ǰԪ�ص���������ڵ�ֱ�ӳ�ջ���������ڵĶ�����ֱ�ӳ�ջ��ĿǰԪ��һ��������һ��Ԫ�������Ԫ��
        if(idx) cout<<arr[idx]<<" ";//֮ǰ��Ԫ������������������ڵ�ǰԪ�أ��Ϳ��Բ��ý��п���
        else cout<<-1<<" ";
        arr[++idx] = x;
    }
}
