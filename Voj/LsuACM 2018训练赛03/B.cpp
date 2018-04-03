#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N];
int c[N], d[N]; 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, cnt1 = 0, cnt2 = 0, cnt = 0;
	cin>>n;
	CLR(c,0);
	CLR(d, 0);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			++cnt1;
		} else {
			++cnt2;
		}
	}
	cnt = 0;
	for (int i = 0; i < n; i ++) {
		if (a[i] == 0) {
			++cnt;
			c[i] = cnt;
		} else {
			c[i] = cnt;
		}
	}
	cnt = 0;
	for (int i = n - 1; i >= 0; i --) {
		if (a[i] == 1) {
			++cnt;
			d[i] = cnt;
		} else {
			d[i] = cnt;
		}
	}	
	int maxn = -INF;
	for (int i = 0; i < n ; i++) {
		if (maxn < c[i] + d[i]) maxn = c[i] + d[i]; 
	}
	cout<<maxn<<endl;
}

