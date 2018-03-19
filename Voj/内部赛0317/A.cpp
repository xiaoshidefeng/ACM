#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

__int64 a[999];
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i , j , k, n , m;
	while(scanf("%d%d", &n, &m) != EOF) {
		__int64 sum = 0;
		__int64 maxn = -INF;
		for (i = 0 ;i < m; i++) {
			scanf("%I64d", &a[i]);
			sum += a[i];
			if (maxn < a[i]) maxn = a[i];
		}
		if (sum < n) {
			printf("impossible\n");
			continue;
		}
		
		sort(a, a + m);
		int cnt = 0;
		for (i = m - 1; i >= 0 && n > 0; i --) {
			if (n > 0) {
				n -= a[i];
				++cnt;
			}
		}
		
//		if (n % maxn == 0) {
			printf("%d\n", cnt);

	}
}

