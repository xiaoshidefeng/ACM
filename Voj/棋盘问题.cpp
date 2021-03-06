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
char maps[20][20];
int vis[20]; //��¼�� 
int cnt,n,k;

void dfs(int now,int step)
{
	if(step==k)
	{
		++cnt;
		return;
	}
	
	for(int i=now;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(maps[i][j]=='#'&&vis[j]==0)
			{
				vis[j]=1;
				dfs(now+1,1+step);
				vis[j]=0;
			}
		}
	}
}
 
int main()
{
	int s,d;
	freopen("f:/input.txt", "r", stdin);
	while((scanf("%d%d",&n,&k)!=EOF)&&n!=-1&&k!=-1)
	{
		
		for(s=0;s<n;s++)
		{
			scanf("%s",maps[s]);
		}
		memset(vis,0,sizeof(vis));
		cnt=0;
		dfs(0,0);
		printf("%d\n",cnt);
		
	}
	return 0;
}