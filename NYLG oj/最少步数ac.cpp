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

typedef struct bbb{
    int xx;
    int yy;
    int step;
  }bbb;



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
	 	{1,1,1,1,1,1,1,1,1}, 
	};
	int x1,x2,y1,y2;
	int i,j,k,bu,zu,wei,f,x,y,fx,m,s;
	int head,tail;
	int bfs[1000];
	bbb a[1000];
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,-1,1};
	int vis[10][10];
	scanf("%d",&zu);
	while(zu--)
	{
		memset(bfs,0,sizeof(bfs));
		memset(vis,0,sizeof(vis));
		scanf("%d%d%d%d",&a[1].xx,&a[1].yy,&x2,&y2);
		if(a[1].xx==x2&&a[1].yy==y2)
		{
			printf("0\n");
			continue;
		}
		bfs[1]=1;
		a[1].step=1;
		head=1;
		tail=1;
		vis[a[1].xx][a[1].yy]=1;
		f=0;
		k=0;
		m=1;
		// printf("%d\n",	a[1].step);
		//printf("2132121\n");
		while(head<=tail)
		{
			wei=bfs[head];
			head++;	
			x=a[wei].xx;
			y=a[wei].yy;
			s= a[wei].step;
			for(i=0;i<4;i++)
			{
				if((x+dx[i])==x2&&(y+dy[i])==y2)
				{//printf("2132121\n");
					printf("%d\n",a[wei].step);
					f=1;
					break;
				}
				else if(x+dx[i]<0||x+dx[i]>8||y+dy[i]<0||y+dy[i]>8)
				continue;
				else if(vis[x+dx[i]][y+dy[i]]==0&&maps[x+dx[i]][y+dy[i]]==0)
				{
					vis[x+dx[i]][y+dy[i]]=1;
					tail++;
					m++;
					bfs[tail]=m;
					a[m].xx=x+dx[i];
					a[m].yy=y+dy[i];
					a[m].step=s+1;
					
				}
			}//printf("2132121\n");
			if(f==1)
			{		//printf("2132121\n");
				break;
			}		
		}
	}	
}

