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
const int N=2001;

bool vis[N];
int mp[N][N];
int dis[N];
int n, t, i, j;

void di(int start) {
	CLR(vis, 0);
	for (i = 1 ; i <= n; i++) {
		dis[i] = mp[1][i];
	}
	dis[1] = 0;
	for (i = 1; i <= n; i ++) {
		int mini = -1, minx = INF;
		for (j = 1 ; j <= n; j ++) {
			if (!vis[j] && dis[j] < minx) {
				minx = dis[j];
				mini = j;
			}
		}
		vis[mini] = 1;
		for (j = 1; j <= n; j++) {
			if (!vis[j])
				dis[j] = min(dis[j], minx + mp[mini][j]);
		}
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	FAST_IO
	int a, b, c;
	while(cin>>t>>n) {
		CLR(mp, INF);
		for (i = 1; i <= t;i ++) {
			cin>>a>>b>>c;
			if (mp[a][b] > c)
				mp[a][b] = mp[b][a] = c;
		}
		di(1);
		cout<<dis[n]<<endl;	
	}
	

}

