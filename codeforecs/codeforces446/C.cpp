#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
#define MAXN 2000
#define MAXL 2000
int prime[MAXN];
bool check[MAXL];

int a[N];

set<int> s;


int initP() {
    CLR(check, 0);
    int  count = 0, n = 2000;
    for (int i = 2; i < n; i++)
    {
        if (!check[i]) {
        	prime[count++] = i;
        	s.insert(i);
		}
            
        for (int j = 0; j < count; j++)
        {
            if (i*prime[j] > MAXL)
                break; // 过大的时候跳出
            check[i*prime[j]] = 1;
            if ((i%prime[j]) == 0) // 如果i是一个合数，而且i % prime[j] == 0
                break; 
        }
    }
    return count;
    //for (int i = 0; i < count; i++)
    //    printf("%d\n", prime[i]);
}

int gcd(int a,int b){    //辗转相除法
    if(a%b==0)  return b;
    else    return gcd(b,a%b);
}

int b[N];
int c[N];
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int count = initP();
	int i , j , k, n;
	cin>>n;
	scanf("%d", &a[0]);
	if (n == 1 && a[0] == 1) {
		cout<<0<<endl;
	}
	bool f = 0;
	for (i = 1; i < n ; i++) {
		scanf("%d", &a[i]);
		k = gcd(a[i], a[i - 1]);
		b[i] = k;
		if ( k == 1) {
			f = 1;
		}
	}
	if (f) {
		cout<< n <<endl;
		return 0;
	} 
	b[0] = b[1];
//	for (i = 1; i < n ; i++) {
//		//scanf("%d", &a[i]);
//		k = gcd(a[i], b[i - 1]);
//		b[i] = k;
//		if ( k == 1) {
//			f = 1;
//			cout << n + 1 <<  endl;
//			return 0;
//		}
//	}
	
	int minx = INF;
	for ( i = 0 ; i < n -1; i ++) {
		int x = a[i], le = INF;
		for (j = i + 1; j < n ; j++) {
			k = gcd(a[j], x);
			if (k == 1) {
				le = j - i - 1;
			}
		}
		if (minx > le) minx = le; 
	}
	if (minx > 10000 ) {
		cout << -1 <<  endl;
	} else {
		cout << minx + n <<  endl;
	}
	
}

