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
//	queue <int> bfs;
	int x1,x2,y1,y2;	//x1 Æðµã //x2 ÖÕµã 
	int i,j,k,bu,zu,wei,f,x,y,fx;
	int head,tail;
	int bfs[100];
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,-1,1};
	int vis[9][9];
	scanf("%d",&zu);
	while(zu--)
	{
		memset(bfs,0,sizeof(0));
		memset(vis,0,sizeof(vis));
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		bfs[0]=(x1*100+y1);
		bu=1;
		head=0;
		tail=0;
		vis[x1][y1]=1; 
		f=0;
		k=0;
		while(head<=tail)
		{
			wei=bfs[head];
			head++;
			if(bfs[head]==10000)
			{
				bu++;
				head++;
			}
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
				continue;
				else if(vis[x+dx[i]][y+dy[i]]==0&&maps[x+dx[i]][y+dy[i]]==0)
				{
					tail++;
					bfs[tail]=((x+dx[i])*100+y+dy[i]);
					vis[x+dx[i]][y+dy[i]]=1;
				}
			}
			fx=0;
			for(i=head;i<=tail;i++)
			{
				if(bfs[i]==10000)
				{
					fx=1;
					break;
				}
			}
			if(fx==0)
			{
				tail++;
				bfs[tail]=10000;
				
			}
			if(f==1)
			{
				break;
			}
			
			
		}
	}
	
	
}

