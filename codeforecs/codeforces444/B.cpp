#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
int a[4][10];

int x[1111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i, j , k, u, n, f;
	cin>>n;
	CLR(a, -1);
	CLR(x, -1);
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < 6 ; j++) {
			scanf("%d", &a[i][j]);
			x[a[i][j]] = 1;
		}
	}
	


	for (j = 0; j < n ; j++) {
		for (k = 0; k < 6; k++) {
			
			for (int q = 0; q < n; q++) {
				if (j == q) continue;
				for (int w = 0; w < 6; w++) {
					x[10 * a[j][k] + a[q][w]] = 1;
					
					for (int e = 0; e < n; e++) {
						if (j == e || q == e) continue;
						for (int r = 0; r < 6; r++) {
							x[100 * a[j][k] + 10 * a[q][w] + a[e][r]] = 1;
						}
					}
				}
			}
		}
	}
	
	for (i = 1; i <= 999; i++) {
		if (x[i] == -1) {
			cout<<i - 1<<endl;
			return 0;
		}
	}
	
}

