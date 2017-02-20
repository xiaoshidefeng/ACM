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
int main()
{
	int maps[9][9]={
		{1,1,1,1,1,1,1,1,1},
 		{1,0,0,1,0,0,1,0,1},
	 	{1,0,0,1,1,0,0,0,1},
 		{1,0,1,0,1,1,0,1,1},
 		{1,0,0,0,0,1,0,0,1},
 		{1,1,0,1,0,1,0,0,1},
 		{1,1,0,1,0,1,0,0,1},
	 	{1,1,0,1,0,0,0,0,1},
	 	{1,1,1,1,1,1,1,1,1}
	};
	queue <int> bfs;
	int x1,x2,y1,y2;	//x1 Æðµã //x2 ÖÕµã 
	int i,j,k,bu,zu,wei,f,x,y;
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,-1,1};
	int vis[9][9];
	scanf("%d",&zu);
	while(zu--)
	{
		memset(vis,0,sizeof(vis));
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		bfs.push(x1*100+y1);
		bu=0;
		vis[x1][y1]=1; 
		f=0;
		k=0;
		while(!bfs.empty())
		{
			
			wei=bfs.front();
			bfs.pop();
			x=wei/100;
			y=wei%100;
			for(i=0;i<4;i++)
			{
				if(x+dx[i]==x2&&y+dy[i]==y2)
				{
					bu++;
					printf("%d\n",bu);
					f=1;
					break;
				}
				else if(x+dx[i]<0&&x+dx[i]>8&&y+dy[i]<0&&y+dy[i]>8)
				break;
				else if(vis[x+dx[i]][y+dy[i]]==0&&maps[x+dx[i]][y+dy[i]]==0)
				{
					bfs.push((x+dx[i])*100+y+dy[i]);
					vis[x+dx[i]][y+dy[i]]=1;
					
				}
			}
			if(f==1)
			{
				while(!bfs.empty())
				bfs.pop();
				break;
			}
			bu++;
			
		}
	}
	
	
}