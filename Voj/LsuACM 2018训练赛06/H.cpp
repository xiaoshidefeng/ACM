#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int* GetNextVal(const string s, int &len)
{
    len = s.length();
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

int KMP(const string s, const string t)
{
    int slen,tlen;
    int i,j;
    int *next = GetNextVal(t, tlen);
    slen = s.length();
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
    int n,m,k;
    string s,t;
    cin>>n>>m>>k;
    cin>>s;
    cin>>t;
//    string s2 = s.substr(1, 3);
//    cout<<s2<<endl;
    bool flag = false;
    for (int i = 0; i <= n-k-k; ++i)
    {
        for (int j = i+k; j <= n-k; ++j)
        {
            string s1 = s.substrj(i, k);
            string s2 = s.substr(j, k);
            string s3 = s1+s2;
//            cout<<s1<<endl;
//            cout<<s2<<endl;
//            cout<<"x:"<<s3<<endl;
//            cout<<t<<endl;
//            int result = KMP(s3,t);
			int result = s3.find(t);
//			cout<<result<<endl;
            if(result>=0){
                cout<<"Yes"<<endl;
                cout<<i+1<<" "<<j+1<<endl;
                flag = true;
                return 0;
            }
        }
    }
    if(flag==false){
        cout<<"No"<<endl;
    }

}

