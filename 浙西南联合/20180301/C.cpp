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
	int n , k, i , j , maxn = -INF;
	cin >> n >> k;
	CLR(a, -1);
	for (i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
		if ( a[i] > maxn) maxn = a[i];
	}
	
	if (n <= k) {
		cout<<maxn<<endl;
		return 0;
	}
	int cnt;
	cnt = 0;
	for (i = 0; i < n; i ++) {
		if (a[i] == -1) continue;
		
		for (j = i + 1; j <= k + n; j++) {
			if (a[j] == -1) continue;
			if (a[i] > a[j]) {
				a[n] = a[j];
				a[j] = -1;
				++n;
				++cnt;
				if (cnt == k) {
					cout << a[i] <<endl;
					return 0;
				}
			} else {
				cnt = 1;
				a[n] = a[i];
				a[i] = -1;
				break;
			}

		}
	}
	
}

