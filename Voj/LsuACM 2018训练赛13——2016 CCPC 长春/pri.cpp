#include"cstdio"  
#include"cstring"  
using namespace std;  
#define MAX 100000//��MAX��Χ�ڵ�����  
long long su[MAX],cnt;  
bool isprime[MAX];  
void prime()  
{  
    cnt=1;  
    memset(isprime,1,sizeof(isprime));//��ʼ����Ϊ��������Ϊ����  
    isprime[0]=isprime[1]=0;//0��1��������  
    for(long long i=2;i<=MAX;i++)  
    {  
        if(isprime[i])  
            su[cnt++]=i;//��������i  
        for(long long j=1;j<cnt&&su[j]*i<MAX;j++)  
        {  
            isprime[su[j]*i]=0;//ɸ��С�ڵ���i��������i�Ļ����ɵĺ���  
        }  
    }  
}  
int main()  
{  
    prime();  
    for(long long i=1;i<cnt;i++)  
        printf("%d  ",su[i]);  
    return 0;  
}  
