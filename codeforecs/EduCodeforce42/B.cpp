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
	int i, j, k;
	//freopen("f:/input.txt", "r", stdin);
//	while(1) {
	
	scanf("%d%d%d", &n, &a, &b);
	scanf("%s", c);
	
	if (a > b) {
		//保证 b 大 
		int t = a;
		a = b;
		b = t;
	}
	int cnt = 0;
	for (i = 0; i < n; i++) {
		if (c[i] == '.') {
			for (j = i + 1, k = 1; j < n ; j ++) {
				if (c[j] == '.') {
					++k;
				} else {
					
					break;
				}
			}
			i = j;
			if (k % 2 == 0) {
				int k2 = k/2;
				if (a >= k2) {
					cnt += k;
					a -= k2;
					b -= k2;
//					printf("%d aaaa\n", cnt);
				} else {
					cnt += a*2;
					
					if (b > a) {
						cnt += 1;
						b -= 1;
					}
					a = 0;
//					printf("%d aaaa\n", cnt);
				}
			} else {
				int k2 = k/2;
				if (a >= k2) {
					cnt += k;
					a -= k2;
					b -= k2;
					if (b > 0)
					b -= 1; 
					else {
						cnt -= 1;
						printf("%d\n", cnt);
						return 0;
					}
//					printf("%d bbbb\n", cnt);
					
				} else {
					cnt += a*2;
					
					if (b > a) {
						cnt += 1;
						b -= 1;
					}
					a = 0;
//					printf("%d bbbb\n", cnt);
				}
				if (a > b) {
					//保证 b 大 
					int t = a;
					a = b;
					b = t;
				}
			}
			

		}
	}
	
	printf("%d\n", cnt);
//	}
}

