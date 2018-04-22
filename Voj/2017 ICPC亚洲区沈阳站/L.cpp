#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

struct nodes{
	int x, step;
};

vector<nodes > v[N];
bool vis[1000][1000];

int finds(int x) {
	int cnt = 0;
//	if (v[sx].size() == 0) {
//		
//	}
	nodes ndd;
	ndd.x = x;
	ndd.step = 0;
	
	queue<nodes > q;
	
	q.push(ndd);
	
	
	while(!q.empty()) {
		nodes nd = q.front();
		q.pop();
		if (nd.step > cnt) cnt = nd.step;
		int vs = v[nd.x].size();
		for (int i = 0 ; i < vs; i ++) {
			if (!vis[v[nd.x][i].x][nd.x]) {
				if (nd.step > v[nd.x][i].step || nd.step == 0) {
					v[nd.x][i].step = nd.step + 1;
					vis[v[nd.x][i].x][nd.x] = 1;
					vis[nd.x][v[nd.x][i].x] = 1;
					q.push(v[nd.x][i]);
				}

			}
		} 
		
//		for (int i = 0 ; i < vs; i ++) {
//			if (nd.step > v[nd][i].step ) {
//				v[nd][i].step = nd.step + 1;
//				vis[nd][i] = 1;
//				q.push(v[nd][i]);
//			}
//		} 
		
	}
	
	cout<<cnt<<endl;
	return cnt;
//	printf("%d")
//	while (1) {
//		int vs1 = v[sx].size(), vs2;
//		for (int i = 0; i < vs1; i ++) {
//			if (v[sx][i].first == )
//		}
//	}
}



int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int  i , j , k, n, m;
	int zu;
	scanf("%d", &zu);
	while(zu--) {
		scanf("%d%d", &n, &m);
		int a, b;
		int njianyi = n - 1;
		for (i = 0 ; i < njianyi ; i ++) {
			scanf("%d%d", &a, &b);
			nodes nd;
			nd.x = b;
			nd.step = 0;
			
			v[a].push_back(nd);
			nd.x = a;
			v[b].push_back(nd);
			
		}
		int maxn = -INF, sx = 1;
		//ÕÒ×î³¤
		
		for (i = sx; i <= n; i ++) {
			CLR(vis, 0);
			finds(i);
//			finds()
		}
	}
}

