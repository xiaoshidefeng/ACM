#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int i, j, le, n , m; 
int a[N];

bool check(int mi) {
	int cnt = 0, before = 0;
	for (i = 1 ; i <= n; i ++) {
		if (a[i] - a[before] <= mi) {
			++cnt;
		} else {
			before = i;
		}
	}
	if (cnt > m) {
		return true;
	} else return false;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	while(cin>>le>>n>>m) {
		int maxn = -INF;
		a[0] = 0;
		for (i = 1; i <= n; i ++) {
			cin>>a[i];
			if (a[i] > maxn) maxn = a[i];
		}
		a[++n] = le; 
		sort(a, a + n);
		int l = 0, r = le * 2, mid;
		while (l < r) {
			mid = MID(l, r);
			if (check(mid)) {
				r = mid;
			} else {
				l = mid + 1;
			}
		}
//		if (l == le) --l;
		cout<<l<<endl;
	}
}

