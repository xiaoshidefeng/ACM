#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e6+7;

int a[N];
bool b[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,i,k,j;
	cin>>n;
	CLR(b, 0);
	for ( i = 0 ; i < n; i ++ ) {
		scanf("%d", &a[i]);
	}
	int maxn = 0;
	int cnt = 0;
	for (i = n - 1; i >= 0; i --) {
		if (maxn != 0) {
			--maxn;
			++cnt;
		}
		if (a[i] > maxn) {
			maxn = a[i];
			continue;
		}
		
	}
	
	printf("%d\n", n - cnt);
}

