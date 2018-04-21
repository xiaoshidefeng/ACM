#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
int n , m , k;
int sx, sy, lx, ly;
char mp[1111][1111];
bool vis[1111][1111];
int smp[1111][1111]; 
int disx[4] = {-1, 0, 1, 0};
int disy[4] = {0, 1, 0,  -1};

int minx = INF;

struct nodes{
	int x, y, step;
};

void bfs() {
	nodes nnd;
	nnd.x = sx;
	nnd.y = sy;
	nnd.step = 0;
	queue<nodes> q;
	vis[sx][sy] = 1;
	q.push(nnd);
	while(!q.empty()) {
		nodes nd = q.front();
		q.pop();
		int x = nd.x, y = nd.y;
		if (x == lx && y == ly) {
			if (minx > nd.step) minx = nd.step;
		}
//		if (smp[x][y] > nd.step) {
//			smp[x][y] = nd.step;
//		} else {
//			continue;
//		}
		
		for (int j = 0; j < 4; j++)  {
//		 	bool = 0;
			for (int i = 1; i <= k; i ++) {
			
				int xx = x + disx[j] * i;
				int yy = y + disy[j] * i;
				
				if (xx < 0 || yy < 0 || xx >= n || yy >= m) {
					continue;
				}
//				if (smp[xx][yy] < nd.step - 1 ) {
//					continue;
//				} else {
//					smp[xx][yy] = nd.step + 1;
//				}

				if (mp[xx][yy] == '#') {
					break;
				}
				if (smp[xx][yy] < nd.step + 1 ) {
					break;
				} else {
					smp[xx][yy] = nd.step + 1;
				}
				if (vis[xx][yy]) {
					continue;
				}
				vis[xx][yy] = 1;
				nodes ndd;
				ndd.x = xx;
				ndd.y = yy;
				ndd.step = nd.step + 1;

				q.push(ndd);
				
			}
//			if ()
		}		
	}
}



int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i , j ;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 0 ; i < n; i ++) {
		scanf("%s", mp[i]);
	}
	scanf("%d%d%d%d", &sx, &sy, &lx, &ly);
	--sx;
	--sy;
	--lx;
	--ly;
	CLR(vis, 0);
	CLR(smp, INF);
//	for (i = 0; i < n; i ++) {
		bfs();
//	}
	if (minx == INF) {
		printf("-1\n");
		return 0;
	}
	printf("%d\n", minx);
}

