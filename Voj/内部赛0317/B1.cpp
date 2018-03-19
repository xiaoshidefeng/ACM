#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[20000];
int b[20000];
int d[20000];
char c[5];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, k ,i , j ;
	while(scanf("%d%d", &n, &k) != EOF) {
		CLR(b, 0); 
		CLR(d, 0);
		int x;
		for ( i = 0 ; i < k; i ++) {
			scanf("%d", &x);
			x *= 2;
			for (j = 1; j <= x ; j ++) {
				scanf("%d", &a[j]);
			}
			scanf("%s", c);
			if (c[0] == '=') {
				for (j = 1; j <= x; j ++) {
					d[a[j]] = 0;
				}
			} else if (c[0] == '<') {
				for (j = 1; j <= x / 2; j ++) {
					d[a[j]] -= 1;
					d[a[j + x / 2]] += 1;
				}
			} else {
				for (j = 1; j <= x / 2; j ++) {
					d[a[j]] += 1;
					d[a[j + x / 2] ] -= 1;
				}
			}
			
		}
		int cnt = 0, q, cnt1 = 0, q1, ma = -INF, mai, mii, mi= INF ;
		for (i = 1; i <= n; i ++) {
			if (ma < d[i]) {
				ma = d[i];
				mai = i;
			}
			if (mi > d[i]) {
				mi = d[i];
				mii = i;
			} 
		}
		if (mi < 0)
		mi = -mi;

		if (ma - (mi)>0) {
			for (i = 1; i <= n; i ++) {
				if (ma == d[i]) ++cnt1;
			}
			if (cnt1 == 1) {
				printf("%d\n", mai);
				
			} else {
				printf("0\n");
			}
			
		} else if (ma - (mi) < 0){
			for (i = 1; i <= n; i ++) {
				if (-mi == d[i]) ++cnt;
			}
			if (cnt == 1) {
				printf("%d\n", mii);
				
			} else {
				printf("0\n");
			}
		} else {
			printf("0\n");
		}

	}
}

