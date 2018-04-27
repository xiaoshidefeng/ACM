#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[100][100];

bool check(int m) {
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , i , j , k;
	scanf("%d", &n);
	for (i = 1; i <= n ; i ++) {
		scanf("%s", c[i]);
		strcat(c[i], c[i]);
	}
	
	int le = strlen(c[0]);
	int l = 0, r = (n - 1) * le, mid;
	while (l < r) {
		mid = MID(l, r);
		if (check(mid)) {
			
		} else {
			
		}
	}
}

