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
int maxx[102][102];
int minn[102][102];

//int vis[102][102];



void bfs()
{
	CLR(maxx,0);
	CLR(minn,0);
	
	maxx[1][1]=maps[1][1];
	minn[1][1]=maps[1][1];
	for(int i=2;i<=x;i++)
	{
		if(maps[i][1]==0)
			{
				int t;
				t=-maxx[i-1][1];
				maxx[i][1]=-minn[i-1][1];
				minn[i][1]=t;
			}else{
				maxx[i][1]=maxx[i-1][1]+maps[i][1];
				minn[i][1]=minn[i-1][1]+maps[i][1];
				printf("%d\n",max(maxx[i][1],minn[i][1]));
			}
	}
	
	for(int i=2;i<=y;i++)
	{
		if(maps[1][i]==0)
			{
				int t;
				t=-maxx[1][i-1];
				maxx[1][i]=-minn[1][i-1];
				minn[1][i]=t;
			}else{
				maxx[1][i]=maxx[1][i-1]+maps[1][i];
				minn[1][i]=minn[1][i-1]+maps[1][i];
			//	printf("%d\n",max(maxx[x][y],minn[x][y]));
			}
	}
	
	
	for(int i=2;i<=x;i++)
	{
		for(int j=2;j<=y;j++)
		{
			if(maps[i][j]==0)
			{
				int t;
				t=-maxx[i][j];
				maxx[i][j]=-minn[i][j];
				minn[i][j]=t;
			}else{
				maxx[i][j]=max(maxx[i-1][j],maxx[i][j-1])+maps[i][j];
				minn[i][j]=min(minn[i-1][j],minn[i][j-1])+maps[i][j];
				printf("%d\n",max(maxx[x][y],minn[x][y]));
			}
		}
	}
	
	printf("%d\n",max(maxx[x][y],minn[x][y]));
	
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