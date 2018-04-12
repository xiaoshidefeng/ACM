#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

struct node{
	__int64 val,sub;
	
	bool operator < (const node & a) const {
		if (val == a.val) {
			return a.sub < sub;
		}
		return a.val < val;
	}
};



priority_queue<node> qu;

struct ans{
	__int64 v, s;
};
ans a[N];
bool cmp(ans a, ans b) {
	return a.s < b.s;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i;
	scanf("%d", &n);
	node nd,md;
	for (i = 0 ; i < n ; i++) {
		scanf("%I64d", &nd.val);
		nd.sub = i;
		qu.push(nd);
	}
	int cnt = 0;
	while (!qu.empty()) {
		
		if (qu.size() == 1) {
			nd = qu.top(); qu.pop();
			
			a[cnt].v = nd.val;
			a[cnt].s = nd.sub;
			++cnt;
			break;
		}
		// 取出顶部两个 
		nd = qu.top(); qu.pop();
		md = qu.top(); qu.pop();
		
		if (nd.val == md.val) {
			
			md.val += nd.val;
			md.sub = max(nd.sub, md.sub);
			qu.push(md);
			
		} else {
			a[cnt].v = nd.val;
			a[cnt].s = nd.sub;
			++cnt;
			qu.push(md);
			
		}
	}
	
	sort(a, a + cnt, cmp);
	printf("%d\n%I64d", cnt, a[0].v);
	for (i = 1 ; i < cnt; i ++) {
		printf(" %I64d", a[i].v);
	} 
	printf("\n");
}

