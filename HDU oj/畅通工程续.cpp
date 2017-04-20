#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

const int maxn = 205;

vector<pair<int,int> >E[maxn];

int n,m;
int dis[maxn],inq[maxn];

void init()
{
	for(int i=0;i<maxn;i++) E[i].clear();
	CLR(inq,0);
	for(int i=0;i<maxn;i++) dis[i]=INF;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int x,y,z;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		init();
		for(int i=0;i<m;i++)
		{
			scanf("%d%d%d",&x,&y,&z);
			E[x].push_back(make_pair(y,z));
			E[y].push_back(make_pair(x,z));
			
		}
		
		int s,t;
		scanf("%d%d",&s,&t);
		
		queue<int> Q;
		Q.push(s);
		dis[s]=0;
		inq[s]=1;
		
		while(!Q.empty())
		{
			int now = Q.front();
			
			Q.pop();
			inq[now]=0;
			for(int i=0;i<E[now].size();i++)
			{
				int v = E[now][i].first;
				if(dis[v]>dis[now]+E[now][i].second)
				{
					dis[v]=dis[now]+E[now][i].second;
					if(inq[v]==1) continue;
					inq[v]=1;
					Q.push(v);
				}
			}
		}
		
		if(dis[t]==INF) printf("-1\n");
		else printf("%d\n",dis[t]);
	}
}