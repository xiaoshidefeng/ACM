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
struct bs{
	
	int lx,ly;
	int ma,mi;
	//int i;
	int val;
};
int x,y;
int maps[102][102];
//int vis[102][102];



void bfs()
{
	queue<bs>q;
	int maxx=-99999;
	bs b,temp1,temp2,temp3;
	b.lx=b.ly=1;
	b.val=maps[1][1];
	//b.ma=maps[1][1];
	q.push(b);
	while(!q.empty())
	{
		temp1=q.front();
		
		if(temp1.lx==x&&temp1.ly==y)
		{
			if(maxx<temp1.val)
				maxx=temp1.val;
			//printf("%d\n",maxx);
		}
		
		q.pop();
		temp2=temp3=temp1;
		if(temp1.lx<x)
		{
			++temp2.lx;
			if(maps[temp2.lx][temp2.ly]==0)
			{
				temp2.val=-temp2.val;
			}else{
				temp2.val+=maps[temp2.lx][temp2.ly];
			}
			q.push(temp2);
		}
			
		if(temp1.ly<y)
		{
			++temp3.ly;
		
		
			if(maps[temp3.lx][temp3.ly]==0)
			{
				temp3.val=-temp3.val;
			}else{
				temp3.val+=maps[temp3.lx][temp3.ly];
			}
			q.push(temp3);
		}	
	}
	
	printf("%d\n",maxx);
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu;
	scanf("%d",&zu);
	while(zu--)
	{
		//CLR(vis[0])
		scanf("%d%d",&x,&y);
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)
				scanf("%d",&maps[i][j]);
		}
		bfs();
	}
	
}