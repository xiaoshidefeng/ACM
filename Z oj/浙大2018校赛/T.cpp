#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=1e3+7;
//
//struct walk{
//	int x,y,step;
//	bool change;
//}; 

bool mp[N][N],vis[N][N];
int n, m, i, j;

void bfs() {
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu;
	scanf("%d", &zu);
	while (zu--) {
		scanf ("%d%d", &n, &m);
		for (i = 0 ; i < n; i ++) {
			for (j = 0; j < m; j ++) {
				scanf("%d", mp[i][j]);
			}
		}
	}
}

