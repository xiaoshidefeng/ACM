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

/*typedef struct ddd{
    int xx;
    int yy;
    int step;
  }ddd;
ddd a[100];*/ 

int maps[9][9]={
		{1,1,1,1,1,1,1,1,1},
 		{1,0,0,1,0,0,1,0,1},
	 	{1,0,0,1,1,0,0,0,1},
 		{1,0,1,0,1,1,0,1,1},
 		{1,0,0,0,0,1,0,0,1},
 		{1,1,0,1,0,1,0,0,1},
 		{1,1,0,1,0,1,0,0,1},
	 	{1,1,0,1,0,0,0,0,1},
	 	{1,1,1,1,1,1,1,1,1}, 
	};

int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
int vis[10][10];
int lx,ly,mins;


void dfs(int x,int y,int step)
{
	int xx,yy;	
	if(x==lx&&y==ly)
	{
		if(mins>step)
		{
			mins=step;
		}
	}
	for(int i=0;i<4;i++)
	{
		xx=x+dx[i];
		yy=y+dy[i];
		if(vis[xx][yy]==0&&maps[xx][yy]==0)
		{
			vis[xx][yy]=1;
			dfs(xx,yy,step+1);
			vis[xx][yy]=0;
		}
	}
	return ;
}

int main()
{
	int i,j,k,nows,fx,fy;
	scanf("%d",&j);
	while(j--)
	{
		memset(vis,0,sizeof(vis));
		scanf("%d%d%d%d",&fx,&fy,&lx,&ly);
		mins=200;
		dfs(fx,fy,0);
		printf("%d\n",mins);
	}
	
}