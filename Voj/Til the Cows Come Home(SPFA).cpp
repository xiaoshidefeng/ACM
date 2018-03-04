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
const int maxn=2002;

int n,m;
vector<pair<int,int> >E[maxn];
int dis[maxn],inq[maxn];

void init()
{
	for(int i=0;i<maxn;i++) E[i].clear();
	CLR(inq,0);
	for(int i=0;i<maxn;i++) dis[i]=INF;	
}

int main()
{
	int x,y,z;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		init();
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d%d",&x,&y,&z);
			E[x].push_back(make_pair(y,z));
			E[y].push_back(make_pair(x,z));
		}
		
		queue<int> Q;
		Q.push(1);
		dis[1]=0;
		inq[1]=1;
		while(!Q.empty())
		{
			int now = Q.front();
			Q.pop();
			inq[now]=0;
			for(int i=0;i<E[now].size();i++)
			{
				int v = E[now][i].first;
				if(dis[v]>dis[now]+E[now][i].second){
					dis[v]=dis[now]+E[now][i].second;
					if(inq[v]==1) continue;
					inq[v]=1;
					Q.push(v);
					
				}
			}
		}
		printf("%d\n",dis[m]);
	}
}
