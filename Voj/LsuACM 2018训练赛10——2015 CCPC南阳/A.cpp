#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[3][3], b[3][3];

bool check() {
	for (int i = 1 ; i <= 2; i ++) {
		for (int j =  1;  j <= 2; j++) {
			if (a[i][j] != b[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , i , j , k;
	cin>>n;
	int cnt = 1;
	while(n--) {
		scanf("%d%d", &a[1][1],&a[1][2]);
		scanf("%d%d", &a[2][1],&a[2][2]);
		scanf("%d%d", &b[1][1],&b[1][2]);
		scanf("%d%d", &b[2][1],&b[2][2]);
		
		if (check()) {
			printf("Case #%d: POSSIBLE\n", cnt++);
			continue;
			
		}
		int f= 0;
		for (i = 0 ; i < 3; i ++) {
			int t = a[1][1];
			a[1][1] = a[2][1];
			a[2][1] = a[2][2];
			a[2][2] = a[1][2];
			a[1][2] = t;
			if (check()) {
				printf("Case #%d: POSSIBLE\n", cnt++);
				f = 1;
				break;
			}
		}
		if (f == 1) {
			continue;
		}
		printf("Case #%d: IMPOSSIBLE\n", cnt++);
		
		
//		check()
		
//		++cnt;
	}
}

