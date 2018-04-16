#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N];
int n, i;
__int64 md;
bool check(int m) {
	__int64 sum = 0;
	for (i = 0 ; i < n; i ++) {
		sum += n - (lower_bound(a + i + 1,a + n, m + a[i]) - a);
		printf(" %d", sum); 
	}
	printf("\n"); 
	if (sum <= md) return 0;
	else return 1;
} 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	while(scanf("%d", &n) != EOF) {
		CLR(a, 0);
		for (i = 0 ; i < n ; i ++) {
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		if (n % 2 == 0)
			md = (n - 1) * (n - 1) / 2;
		else md = (n - 1) * (n - 1) / 2 + n/2 + 1;
		printf("%d", md);
		int l = 0, r = a[n - 1] - a[0], mid;
		while(l < r) {
			mid = MID(l, r);
			if (check(mid)) {
				l = mid;
			} else {
				r = mid;
			}
		}
		printf("%d\n", l);
	}
}

