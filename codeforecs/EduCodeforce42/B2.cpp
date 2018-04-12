#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int n, a, b;
char c[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i , j , k;
//	while(1) {

	scanf("%d%d%d", &n, &a, &b);
	scanf("%s", c);
	if (a > b) {
		//±£Ö¤ b ´ó 
		int t = a;
		a = b;
		b = t;
	}
	int cnt = 0, cnt2 = 0,cnt3 = 0, f = 0;
	for (i = 0 ;i < n; i ++) {
		
		if (c[i] == '.') {
			if (f == 0) {
				++cnt3;
				f = 1;
			}
				
			if ((c[i - 1] == '*' && c[i + 1] == '*' ) || (i == 0 && c[i + 1] == '*') || (i == n - 1 && i - 1 == '*')) {
				++ cnt2;
			} else {
				++cnt;
			}
			
		} else {
			f = 0;
		}
	} 
	if (cnt == a * 2) {
		if (cnt2 >= b - a ) {
			printf("%d\n", a + b);
		} else {
			printf("%d\n", a * 2 + cnt2);
		}
		
	} else if (cnt == a * 2 + 1) {
		if (b > a) {
			int sum = a * 2 + 1; 
			if (cnt2 >= b  - 1 - a) {
				printf("%d\n", a + b);
			} else {
				printf("%d\n", sum + cnt2);
			}
		} else {
			int sum = a * 2; 
			if (cnt2 >= b  - a) {
				printf("%d\n", a + b);
			} else {
				printf("%d\n", sum + cnt2);
			}
		}
	} else if (cnt > a * 2 + 1){
		int sum = a * 2;
		b -= a;
		if (cnt2 >= b) {
			if (a < cnt3)
			printf ("%d\n", sum + b + 1);
			else {
				printf ("%d\n", sum + b);
			}
		} else {
			if (a < cnt3) 
			printf("%d\n", sum + cnt2 + 1);
			else printf("%d\n", sum + cnt2);
		}
	} else {
		int sum = cnt;
		if (cnt2 > a + b - cnt) {
			printf ("%d\n", a + b);
		} else {
			printf ("%d\n", cnt + cnt2);
		}
	}
//		}	
}

