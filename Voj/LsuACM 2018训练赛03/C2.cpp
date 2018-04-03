#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
int n, k, m;
int mp[50][50];
int mh[50];
bool vis[50][50];
int pmp[50][50];
int i;

int disx[4] = {1, 0 , -1, 0};
int disy[4] = {0, 1 , 0, -1};


struct pp{
	int x, y,p, power;
};

pp nodemp[50][50];

int bfs() {
	int eng = m;
	pp po;
	po.p = 1;
	po.x = 0;
	po.y = 0;
	po.power = m - mp[0][0];
	if (po.power < 0 ) {
		return 0;
	}

	queue<pp> q;
	q.push(po);
	vis[0][0] = 1;
	nodemp[0][0].x = po.x;
	nodemp[0][0].y = po.y;
	nodemp[0][0].p = po.p;
	nodemp[0][0].power = po.power;
	if (po.y == k - 1) {
		// 奖励 
		for (int u = 0; u < k ; u ++) {
			++nodemp[po.x][u].p;
		}
	}
	while (!q.empty()) {
		pp p = q.front();
		q.pop();
		int xx = p.x;
		int yy = p.y;
		int point = p.p;
		int powe = p.power;
		
//		if (powe - mp[xx][yy] > 0) {
			for (i = 0; i < 4; i ++) {
				int xxx = xx + disx[i];
				int yyy = yy + disy[i];
				if (xxx >= 0 && yyy >= 0 && xxx < n && yyy < k && !vis[xxx][yyy]) {
					
					// 可以入队 
					if (powe - mp[xxx][yyy] > 0) {
						vis[xxx][yyy] = 1;
						pp pw;
						pw.x = xxx;
						pw.y = yyy;
						pw.power = powe - mp[xxx][yyy];
						pw.p = point + 1;
						nodemp[xxx][yyy].x = pw.x;
						nodemp[xxx][yyy].y = pw.y;
						nodemp[xxx][yyy].p = pw.p;
						nodemp[xxx][yyy].power = pw.power;
						if (yyy == k - 1) {
							// 奖励 
							for (int u = 0; u < k ; u ++) {
								++nodemp[xxx][u].p;
							}
						}
						
						q.push(pw);
					}
				}
			}
//		}
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);

	scanf("%d%d%d", &n, &k, &m);
	for (i = 0 ; i < k; i ++) {
		scanf("%d", &mh[i]);
		for (int j = 0 ; j < n;j ++) {
			mp[j][i] = mh[i];
		}
	}
	CLR(vis, 0);
	CLR(pmp, 0);
	CLR(nodemp, 0);
	if (!bfs()) {
		cout<<0<<endl;
		return 0;
	}
	int maxn = -INF;
	
	for (i = 0 ; i < n; i ++) {
		for (int j = 0 ; j < k; j ++) {
			if (nodemp[i][j].p > maxn) maxn = nodemp[i][j].p;
		}
	}
	cout<<maxn<<endl;
	return 0;
	
}

