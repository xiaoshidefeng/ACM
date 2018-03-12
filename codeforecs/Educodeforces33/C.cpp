#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N], pre[N];
__int64 minn[N];

int finds(int x) {
	if (pre[x] == x) {
		return pre[x];
	} else {
		int pr = finds(pre[x]);
		if (minn[pr] < minn[x]) {
			minn[x] = minn[pr];
		} else {
			minn[pr] = minn[x];
		}
		return pre[x] = pr;
	}
//	return x==pre[x]?pre[x]:pre[x]=finds(pre[x]);
}

void join(int x, int y) {
	int p1 = finds(x);
	int p2 = finds(y);
	if(p1==p2) return;
	
	pre[p2]=p1;
	if (minn[p1] < minn[p2]) {
		minn[p2] = minn[p1];
	} else {
		minn[p1] = minn[p2];
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, m, i , j, k, x, y;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n ;i ++) {
		scanf("%I64d", &minn[i]);
		pre[i] = i;
	}
	
	for (i = 1 ; i <= m ; i ++) {
		scanf("%d%d", &x, &y);
		join(x, y);
	}
	__int64 cnt = 0;
	for (i = 1; i <= n ; i ++) {
		if (pre[i] == i) {
			cnt += minn[i];
		}
	}
	cout<<cnt<<"\n"<<endl;
}

