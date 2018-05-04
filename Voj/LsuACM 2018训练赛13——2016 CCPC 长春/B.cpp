#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
#define MAX 100000
long long su[MAX],cnt;  
bool isprime[MAX];  
void prime()  
{  
    cnt=1;  
    memset(isprime,1,sizeof(isprime));//初始化认为所有数都为素数  
    isprime[0]=isprime[1]=0;//0和1不是素数  
    for(long long i=2;i<=MAX;i++)  
    {  
        if(isprime[i])//保存素数  
        {  
            su[cnt++]=i;  
        }  
        for(long long j=i*2;j<=MAX;j+=i)//素数的倍数都为合数  
        {  
            isprime[j]=0;  
        }  
    }  
}  

int a[100];
int b[100];

int main()
{
//	freopen("f:/input.txt", "r", stdin);
	int n , m, i , j , k,zi,mu;
	prime();
	cin>>m;
	for (int zu = 1 ; zu <= m ; zu ++) {
		cin>>n;
		for (i = 1; i <= n; i ++) {
			scanf("%d", &a[i]);	
		}
		for (i = 1; i <= n; i ++) {
			scanf("%d", &b[i]);	
		}
		zi = b[n];
		mu = a[n];
		for (i = n - 1; i >= 1; i --) {
			int tm = mu;
			mu = a[i] * mu + zi;
			zi = tm * b[i];
		}
		for (i = 1; i < cnt - 1; i ++) {
			while(zi % su[i] == 0 && mu % su[i] == 0) {
				zi /= su[i];
				mu /= su[i];
			}
		}
		printf("Case #%d: ", zu);
		cout<<zi<<" "<<mu<<"\n";
	}
}

