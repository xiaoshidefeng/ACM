#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int n , m, cnt, isok, i, j;
char mp[66][66];
bool vis[66][66];

int disx[4] = {0, 1, 0 , -1};
int disy[4] = {1, 0, -1 , 0};
int sx, sy;

char now;
int visd[4] ;

void dfs(int x, int y, int step, int di) {
	if (isok) {
		return ;
	}
	if (step >= 4 && vis[x][y] && visd[0] > 0&& visd[1] > 0&& visd[2] > 0&& visd[3] > 0&& x == sx && y == sy) {
		
		isok = 1;
		return ;
	}
	
	if (vis[x][y] && (x != sx || y != sy )) {
		--visd[di];
		return;
	}
	if (y == sy && x == sx) {
		CLR(visd, 0);
	}
		
	vis[x][y] = 1;
	for (int w = 0 ; w < 4; w++) {
		int xx = disx[w] + x;
		int yy = disy[w] + y;
		if (xx < 0 || yy < 0 ||xx >= n || yy >= m) {
			continue;
		}
		if (now != mp[xx][yy]) {
			continue;
		}
		if (w == 0) {
			visd[0] += 1;
			dfs(xx, yy, ++step, 0);
//			visd[0] -= 1;
		} else if(w == 1) {
			visd[1] += 1;
			dfs(xx, yy, ++step, 1);
//			visd[0] -= 2;
		} else if (w == 2) {
			visd[2] += 1;
			dfs(xx, yy, ++step, 2);
//			visd[0] -= 3;
		} else if (w == 3) {
			visd[3] += 1;
			dfs(xx, yy, ++step, 3);
//			visd[0] -= 3;
		}

		--step;
        
	}
	--visd[di];
	--step;
	return ;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	scanf("%d%d", &n, &m);
	for (i = 0 ; i < n ; i++) {
		scanf("%s", mp[i]);
	}

	isok = 0;
	cnt = 0;
	CLR(vis, 0);
	for (i =0 ; i < n; i ++) {
		for (int q = 0; q < m; q ++) {
			CLR(vis, 0);
			if(!vis[i][q]) {
				cnt = 0;
				now = mp[i][q];
				
				sx = i;
				sy = q;
				CLR(visd, 0 );

				vis[i][q] = 1;
				dfs(i, q, 1, 0);
				if (isok == 1) {
					cout<<"Yes"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"No"<<endl;
	return 0;


}
