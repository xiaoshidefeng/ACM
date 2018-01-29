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
const int maxn=100002;

int n,m;

long long dis[maxn];
int inq[maxn];
int vi[maxn];
int la[maxn];

void init()
{
	CLR(inq,0);
	CLR(vi,-1);
	CLR(dis, INF);
}



int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int x,y;
	long long z;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		init();
		vector<pair<int,long long> >E[maxn];
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d%lld",&x,&y,&z);
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
			if(dis[now]>dis[m]) continue; 
			for(int i=0;i<E[now].size();i++)
			{
				int v = E[now][i].first;
				if(dis[v]>dis[now]+E[now][i].second){
					dis[v]=dis[now]+E[now][i].second;
					vi[v] = now;
					if(inq[v]==1) continue;
					inq[v]=1;
					Q.push(v);
					
				}
			}
		}
		if(dis[m]==INF || vi[m] == -1) {
			printf("-1\n");
		} else {
			la[0]=m;
			int i =m,cnt=1;
			while(vi[i]!=-1) {
				la[cnt]=vi[i];
				i=vi[i];
				++cnt;
			}
			for(i=cnt-1;i>0;i--) printf("%d ",la[i]);
			printf("%d\n",m);
			
		}
		
	}
}