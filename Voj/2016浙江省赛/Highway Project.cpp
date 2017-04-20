#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const long long INF = (1ll<<60)-1;
const int N=2e5+7;

const int maxn = 100022; 

int n,m;

struct cd{
	long long cost,d;
};

vector<pair<int,cd> > E[maxn];

long long dis[maxn],inq[maxn],costs[maxn];

void init()
{
	for(int i=0;i<maxn;i++) E[i].clear();
	CLR(inq,0);
	for(int i=0;i<maxn;i++) {
		dis[i]=INF;
		costs[i]=INF;
	}
}



int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,x,y;
	long long c,d;
	long long a1,a2;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d",&n,&m);
		init();
		for(int i=0;i<m;i++)
		{
			
			scanf("%d%d%lld%lld",&x,&y,&d,&c);
			cd dd;
			dd.cost = c;
			dd.d = d;
			E[x].push_back(make_pair(y,dd));
			E[y].push_back(make_pair(x,dd));
		}
		
		queue<int> Q;
		dis[0]=0;
		costs[0]=0;
		//inq[0]=1;
		Q.push(0);
		while(!Q.empty())
		{
			int now = Q.front();
			Q.pop();
			
			inq[now]=0;
			for(int i=0; i<E[now].size();i++)
			{
				int v = E[now][i].first;
				long long ti = E[now][i].second.d;
				long long mo = E[now][i].second.cost;
				
				if(dis[v]>dis[now]+ti||(dis[v]==(dis[now]+ti)&&(costs[v]>mo)))
				{
					
					dis[v]=dis[now]+ti;
					costs[v]=mo;
					//printf("%d\n",costs[v]);
					if(inq[v]==1) continue;
					inq[v]=1;
					Q.push(v);
				}
			}
		}
		
		a1=0,a2=0;
		for(int i=0;i<n;i++)
		{
			a1+=dis[i];
			a2+=costs[i];
		}
		//printf("%d %d %d %d\n",dis[0],dis[1],dis[2],dis[3]);
		//printf("%d %d %d %d\n",costs[0],costs[1],costs[2],costs[3]);
		printf("%lld %lld\n",a1,a2);
	}
}