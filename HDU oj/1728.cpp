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
int maps[101][101];
int vis[101][101];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
int x11,y11,x22,y22;
int r,c,most,n,turn;	//r –– c¡–


void dfs(int x,int y,int turn){
	int xx,yy;
	printf("%d\n",turn);
	if(x==x22&&y==y22)
	{
		printf("%d\n",turn);
	}
	
	for(int i=0;i<4;i++)
	{
		xx=x+dx[i];
		yy=y+dy[i];
		if(xx<0||yy<0||xx>=c||yy>=r)
		{
			continue;
		}
		if(vis[xx][yy]==0&&maps[xx][yy]=='.')
		{
			vis[xx][yy]=1;
			dfs(xx,yy,turn+1);
			vis[xx][yy]=0;
		}
	}
	return ;
}

int main()
{

	scanf("%d",&n);
	while(n--)
	{
		memset(maps,0,sizeof(maps));
		memset(vis,0,sizeof(vis));
		turn=0;
		scanf("%d%d",&r,&c);
		for(int i=0;i<r;i++)
		{
			scanf("%s",&maps[i]);
			//printf("%s\n",maps[i]);
		}
		scanf("%d%d%d%d%d",&most,&x11,&y11,&x22,&y22);
		if(x11==x22&&y11==y22)
		{
			printf("yes\n");
			continue;
		}
		x11--;
		y11--;
		x22--;
		y22--;
		dfs(x11,y11,turn);
		
	} 	                                                                                                                                                                                                                                                                                                                                                                                                                                                                          	
} 
