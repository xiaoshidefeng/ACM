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

int m,n;
int g[3000][3000];
int dijk[3000];
int vis[3000];

void init(){
	for(int i=0; i<3000; i++)	dijk[i]=INF;
	memset(vis, 0 , sizeof(vis));
}

void addEdge(int a, int b, int c){
	if(g[a][b] > c){
		g[b][a]=c;
		g[a][b]=c;
	}
}


void Dijkstra(int begin){
	init();
	dijk[begin]=0;

	while(1){
		int u=-1, minn=INF;
		for(int i=1; i<=n; i++){
			if(!vis[i] && minn>dijk[i]){
				minn = dijk[i];
				u = i;
			}
		}

		vis[u] = 1;
		if(u==-1){
			break;
		}
		for(int v=1; v<=n; v++){
			if(!vis[v] && dijk[v]>dijk[u] + g[u][v]){
				dijk[v]=dijk[u] + g[u][v];
			}
		}
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int a,b,c;
	while(scanf("%d%d",&m,&n)!=EOF){
		for(int i=0;i<2001;i++)
			for(int j=0;j<2001;j++)
				g[i][j]=INF;
		for(int i=1; i <= m; i++){
			scanf("%d%d%d",&a,&b,&c);
			addEdge(a, b, c);
		}
		Dijkstra(1);
		printf("%d\n", dijk[n]);
	}
	
}