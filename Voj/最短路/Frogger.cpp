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
const int N=300;

double mp[N][N];
double dis[N];
bool vis[N];

struct p{
	int x, y;
};

p pp[N];

int n;

double di(p a, p b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void dijkstra(int start) {
	CLR(vis, 0);
	for (int i = 0 ; i < n ; i ++) {
		dis[i] = INF;
	}
	
	dis[start] = 0;
	for (int i = 0 ; i < n; i ++) {
		int minx = INF, mini = INF;
		for (int j = 0; j < n;j ++) {
			if (!vis[j] && dis[j] < minx) {
				minx = dis[j];
				mini = j;
			}
		}
		vis[mini] = 1;
		for (int j = 0 ; j < n ; j ++) {
			dis[j] = min(dis[j], max(dis[mini], mp[mini][j]));
		}
	}
}
 

int main()
{
	int  x, y, i, cnt = 0;
	while(cin>>n && n) {
		for (i = 0 ; i < n ; i ++) {
			scanf("%d%d", &pp[i].x, &pp[i].y);
		}
		for (i = 0 ; i < n ; i++) {
			for (int j = 0;j < n; j ++ ) {
				mp[i][j] = mp[j][i] = di(pp[i], pp[j]);
			}
		}
		dijkstra(0);
		cout<<"Scenario #"<<++cnt<<endl;  
		printf("Frog Distance = %.3f\n\n", dis[1]);
	}
}

