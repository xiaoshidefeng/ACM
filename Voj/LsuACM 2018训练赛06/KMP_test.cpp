#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int* GetNextVal(const char *s, int &len)
{
    len = strlen(s);
    int *next = new int[len];
    int i = 0;
    int j = -1;
    next[0] = -1;
    while(i<len-1)//注意这里跟KMP函数里面的不同
    {
        if(j==-1 || s[i]==s[j])
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else
        {
            j = next[j];
        }
    }
    return next;
}

int KMP(const char *s, const char *t)
{
    int slen,tlen;
    int i,j;
    int *next = GetNextVal(t, tlen);
    slen = strlen(s);
    i = 0;
    j = 0;
    while(i<slen && j<tlen)
    {
        if(j==-1 || s[i]==t[j])
        {
            ++i;
            ++j;
        }
        else
        {
            j = next[j];
        }
    }

    delete[] next;

    if(j==tlen)
        return i - tlen;
    return -1;
}

int main(int argc, char *argv[])
{
    char s[128],t[128];
    while(cin>>s>>t)
    {
        int pos1 = KMP(s,t);
        int pos2 = strstr(s,t) - s;
        cout<<pos1<<":"<<pos2<<endl;
    }
    return 0;
}

