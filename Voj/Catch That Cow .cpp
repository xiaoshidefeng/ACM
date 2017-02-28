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

typedef struct fi
{
	int dis;
	int bu;
	
}fi;

fi fam,now,temps;

queue<fi>q;
int n,x,cnt;
int vis[N];

void bfs()
{
	while(!q.empty())
	{
		now=q.front();
		q.pop();
		temps=now;
		if(now.dis==x)
		{
			cnt=now.bu;
			break;
		}
		++now.bu;
		if(now.dis<x)
		{
			if(!vis[temps.dis*2])
			{
				now.dis=temps.dis*2;
				q.push(now);
				vis[now.dis]=1;
			}
			if(!vis[temps.dis+1])
			{
				now.dis= temps.dis+1;
				q.push(now);
				vis[now.dis]=1;
			}
			if(!vis[temps.dis-1])
			{
				now.dis= temps.dis-1;
				q.push(now);
				vis[now.dis]=1;
			}
		}else {
			
			if(!vis[temps.dis-1])
			{
				now.dis= temps.dis-1;
				q.push(now);
				vis[now.dis]=1;
			}
		}
		
		
	}
	
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j;
	while(scanf("%d%d",&fam.dis,&x)!=EOF)
	{
		if(fam.dis==x)
		{
			printf("0\n");
			continue;
		}
		fam.bu=0;
		cnt=0;
		q.push(fam);
		CLR(vis,0);
		vis[fam.dis]=1;
		bfs();
		printf("%d\n",cnt);
	}
}