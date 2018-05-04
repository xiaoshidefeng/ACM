#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N],b[N], c[N]; 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i ,j ,k;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i ++) {
		scanf("%d", &a[i]);
	}
	for (i = 0 ; i < n ; i ++) {
		scanf("%d", &b[i]);
	}
	__int64 sum = 0;
	for (i = 0; i < n ; i ++) {
		int j = i;
		while (b[j] > 0) {
			if (j == n) break;
			if (b[j] <= a[j]) {
				sum += b[j];
				break;
			}
			b[j] -= a[j];
			sum += a[j];
			++j;
		}
	}
	printf("%I64d\n", sum);
}

