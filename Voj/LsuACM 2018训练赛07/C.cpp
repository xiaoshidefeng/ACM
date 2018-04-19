#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int n, i , j, k;
int a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	scanf("%d", &n);
	for (i = 1; i <= n; i ++)
	scanf("%d", &a[i]);
	int k = (int)(n/2);
//	if (n % 2 == 1)
//	for (i = 1; i <= n ; i ++) {
//		if (i % 2 == 0) {
//			printf("%d ", a[i]);
//		} else {
//			if (i <= k) {
//				printf("%d ", a[n - i + 1]);
//			} else {
//				printf("%d ", a[n - i + 1]); 
//			}
//		}
//	}
	
//	if (n % 2 == 0)
	for (i = 1 ; i <= k ; i ++) {
		if (i % 2 == 1) {
			int t = a[i];
			a[i] = a[n - i + 1];
			a[n - i + 1] = t;
		}
	}
	
	printf("%d", a[1]);
	for(i = 2; i <= n; i ++) printf(" %d", a[i]);
	printf("\n");
}

