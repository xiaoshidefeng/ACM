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
int r,c,k;
char maps[101][101];
int vis[101][101];
void dfs (int x,int y,int step)
{
	if(x<0||y<0||x>=r||y>=c) return ;
	if(maps[x][y]=='*'||vis[x][y]!=0) return ;
	vis[x][y]=step;
	for(int q=-1;q<=1;q++)
		for(int w=-1;w<=1;w++)
		{
			if(q!=0||w!=0)
			{
				
				dfs(x+q,y+w,step);
			}
						
		}
		return ;
} 

int main()
{
	int i,j;
	while(scanf("%d%d",&r,&c)!=EOF&&r&&c)
	{
		memset(vis,0,sizeof(vis));
		for(i=0;i<r;i++)
			scanf("%s",maps[i]);
			
		k=0;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(maps[i][j]=='@'&&vis[i][j]==0)
					dfs(i,j,++k);
			}
		}
		printf("%d\n",k);
	}
}