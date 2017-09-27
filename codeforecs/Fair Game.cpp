#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,i,j,k,f;
	int a[300];
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a,a + n);
	k = a[n-1] - a[0];
	f=0;
	if(k == 0) {
		printf("NO\n");
		return 0;
	}
	for(i = 0; i < n/2; i++) {
		if(a[n - i - 1] - a[i] != k) {
			f=1;
			break;
		}
	}
	if(f == 1) {
		printf("NO\n");
	}else {
		printf("YES\n");
		printf("%d %d\n", a[0], a[n - 1]);
	}
}

