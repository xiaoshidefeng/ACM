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

struct bs
{
	int x,y,l,bu;
};

int l,r,c;

bs fir;
char maps[100][100][100];
int vis[100][100][100];

void bfs(bs a)
{
	queue<bs>q;
	bs temp1,temp2;
	
	q.push(a);
	
	while(!q.empty())
	{
		temp1=q.front();
		//printf("%d %d %d\n",temp1.l,temp1.x,temp1.y);
		if(maps[temp1.l][temp1.x][temp1.y]=='E')
		{
			break;
		}
		q.pop();
		//++temp1.bu;
		
		temp2=temp1;
		++temp2.x;
		if(temp2.x<r&&vis[temp2.l][temp2.x][temp2.y]==0&&maps[temp2.l][temp2.x][temp2.y]!='#')
		{
			++temp2.bu;
			q.push(temp2);
			vis[temp2.l][temp2.x][temp2.y]=1;
		}
		
		temp2=temp1;
		++temp2.y;
		if(temp2.y<c&&vis[temp2.l][temp2.x][temp2.y]==0&&maps[temp2.l][temp2.x][temp2.y]!='#')
		{
			++temp2.bu;
			q.push(temp2);
			vis[temp2.l][temp2.x][temp2.y]=1;
		}
		
		temp2=temp1;
		++temp2.l;
		if(temp2.l<l&&vis[temp2.l][temp2.x][temp2.y]==0&&maps[temp2.l][temp2.x][temp2.y]!='#')
		{
			++temp2.bu;
			q.push(temp2);
			vis[temp2.l][temp2.x][temp2.y]=1;
		}
		
		temp2=temp1;
		--temp2.x;
		if(temp2.x>=0&&vis[temp2.l][temp2.x][temp2.y]==0&&maps[temp2.l][temp2.x][temp2.y]!='#')
		{
			++temp2.bu;
			q.push(temp2);
			vis[temp2.l][temp2.x][temp2.y]=1;
		}
		
		temp2=temp1;
		--temp2.y;
		if(temp2.y>=0&&vis[temp2.l][temp2.x][temp2.y]==0&&maps[temp2.l][temp2.x][temp2.y]!='#')
		{
			++temp2.bu;
			q.push(temp2);
			vis[temp2.l][temp2.x][temp2.y]=1;
		}
		
		temp2=temp1;
		--temp2.l;
		if(temp2.l>=0&&vis[temp2.l][temp2.x][temp2.y]==0&&maps[temp2.l][temp2.x][temp2.y]!='#')
		{
			++temp2.bu;
			q.push(temp2);
			vis[temp2.l][temp2.x][temp2.y]=1;
		}
	}
	if(temp1.bu==0)
	{
		printf("Trapped!\n");
	}else
	{
		printf("Escaped in %d minute(s).\n",temp1.bu);
	}
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int fx,fy,fl,f;
	while(scanf("%d%d%d",&l,&r,&c)!=EOF&&l&&r&&c)
	{
		CLR(vis,0);
		f=0;
		for(int i=0;i<l;i++)
		{
			getchar();
			for(int j=0;j<r;j++)
			{
				scanf("%s",maps[i][j]);
				for(int x=0;x<c&&f==0;x++)
					if(maps[i][j][x]=='S')
					{
						fir.x=j;
						fir.y=x;
						fir.l=i;
						fir.bu=0;
						f=1;
						break;
					}
			}
				
		}
		getchar();
		vis[fir.l][fir.x][fir.y]=1;
		bfs(fir);
			
		
	}
}