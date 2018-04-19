#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[N];

char a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, m, i, j, le, pre, k;
	scanf("%d", &n);
	CLR(a, 'a');
	for (i = 0 ; i < n ; i ++) {
		scanf("%s", c);
		scanf("%d", &m);
		le = strlen(c);
		pre = 0;
		for (j = 0 ; j < m; j ++) {
			scanf("%d", &k);
//			--k;
			int lle = le + pre;
			if (pre >= k + 1) {
				if (k + 1 + le > pre) {
//					k + 1 + le - pre
					for (int x = pre - k - 1; x < lle; x ++) {
						a[pre++] = c[x];
					}
				}
			} else {
				
				int cn = 0;
				for (int x = k - 1; x < lle ; x ++) {
					a[x] = c[cn++];
				}
				pre += k;
			}
		}
	}
	for (i = 0 ; i < 10; i ++) {
		printf("%c", a[i]);
	} 
//	cout<<a<<endl;
}

