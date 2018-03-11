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
int zu, n, i , j , k, m;
struct pp{
	int x,y,z;
}; 

pp p[N];

int mp[2000][2000];
bool vis[2000];
int dis[2000];

void di(int start) {
	CLR(vis, 0);
	
	for (i = 1;i <= n; i ++) {
		dis[i] = mp[1][i];
	}
	
	dis[start] = p[0].z;
	for (i = 1; i <= n; i ++) {
		int maxn = -INF,maxi = -1;
		for (j = 1; j <= n; j++) {
			if (!vis[j] && dis[j] > maxn) {
				maxn = dis[j];
				maxi = j;
			}
		}
		vis[maxi] = 1;
		for (j = 1 ; j <= n ; j ++) {
			dis[j] = max(dis[j], min(dis[maxi], mp[maxi][j]));
		}
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int a, b, c;
	cin >> zu;
	for (int q = 0; q < zu ; q++ ) {
		cin>>n>>m;
		CLR(mp, -1);
		for (i = 1 ; i <= m; i++) {
			scanf("%d%d%d", &a, &b, &c);
			mp[a][b] = mp[b][a] = c;
		}
		
		di(1);
		cout<<"Scenario #"<<q + 1<<":"<<endl;
		cout<<dis[n]<<"\n"<<endl;
	}
}

