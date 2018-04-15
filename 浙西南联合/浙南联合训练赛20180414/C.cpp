#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N];
int b[N];
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,i, cnt = 0;
	scanf("%d", &n);
	for (i = 0 ; i < n; i ++) {
		scanf("%d", &a[i]);
	}
	int ji = 0;
	for (i = 0; i < n ; i++) {
		if (a[i] < 0) ++ji;
	}
	
	int j = 0;
	int c = 0;
	
	for (i = 0; i < n ; i++) {
		if (a[i] < 0 ) {
			++cnt;
			if (cnt == 2) {
				b[c] = i + 1;
				++c;
				j = i;
				break;
			}
		}
	}
	cnt = 0;
	for (j = j + 1; j < n ; j++) {
		if (a[j] < 0 ) {
			++cnt;
			if (cnt == 2) {
				b[c] = j + 1;
				++c;
				cnt = 0;
			}
		}
	}
	if (c == 0) {
		printf("1\n%d\n", n);
		return 0;
	}
	if (ji % 2 == 1)
	if (b[c - 1] != n) {
		b[c] = n;
		++c;
	}
//	if (c == 1 && b[0] != n - 1) {
//		printf("%d\n", 2);
//		prin
//	}
	if (ji % 2 == 0)
	b[c -1] = n;
	printf("%d\n", c);
	printf("%d", b[0]);
	for (i = 1 ; i < c; i ++) {
		printf(" %d", b[i] - b[i - 1]);
	}
	printf("\n");
}

