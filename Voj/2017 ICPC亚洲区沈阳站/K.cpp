#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu, i , j , k, n;
	scanf("%d", &zu);
	
	while (zu--) {
		scanf("%d", &n);
		
		for (i = 0 ; i < n ; i ++) {
			scanf("%d", &a[i]);
		}
		int maxn = -INF;
		
		int sum1 = a[n - 1] - a[1] - 1 - (n - 3);
		int sum2 = a[n - 2] - a[0] - 1 - (n - 3);
		
		maxn = max(sum1, sum2);
		cout<<maxn<<endl;
	}
}

