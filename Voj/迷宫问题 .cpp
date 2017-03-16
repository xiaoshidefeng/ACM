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
	int nowx,nowy,bu,prex,prey;
};

bs a[7][7];
queue<bs>q;
int n,m;

int maps[7][7];
int vis[7][7]; 
int cnt =0;
int r[50][2];
void pri()
{
	printf("(0, 0)\n");
	int i=5,j=5,k=1,x;
	
	while(a[i][j].prex!=1||a[i][j].prey!=1)
	{
		r[k][0]=a[i][j].prex-1;
		r[k][1]=a[i][j].prey-1;
		x=i;
		i=a[i][j].prex;
		j=a[x][j].prey;
		k++;
	}
	
	while(--k)
	{
		printf("(%d, %d)\n",r[k][0],r[k][1]);
	}
	printf("(4, 4)\n");
	
}

void bfs()
{
	bs temps1,temps2;

	while(!q.empty())
	{
		temps1=q.front();
		a[temps1.nowx][temps1.nowy]=temps1;
		//printf("%d %d\n",temps1.nowx,temps1.nowy);
		q.pop();
		if(temps1.nowx==5&&temps1.nowy==5)
		{
			cnt=temps2.bu;
			break;
		}
		
		
		++temps1.bu;
		
		temps1.prex=temps1.nowx;
		temps1.prey=temps1.nowy;
		
		temps2=temps1;
		++temps2.nowx;
		if((temps2.nowx)<=5&&maps[temps2.nowx][temps2.nowy]==0&&vis[temps2.nowx][temps2.nowy]==0)
		{
			q.push(temps2);
			vis[temps2.nowx][temps2.nowy]=1;
		}
		
		temps2=temps1;
		++temps2.nowy;
		if((temps2.nowy)<=5&&maps[temps2.nowx][temps2.nowy]==0&&vis[temps2.nowx][temps2.nowy]==0)
		{
			q.push(temps2);
			vis[temps2.nowx][temps2.nowy]=1;
		}
		
		temps2=temps1;
		--temps2.nowy;
		if((temps2.nowy)<=5&&temps2.nowy>0&&maps[temps2.nowx][temps2.nowy]==0&&vis[temps2.nowx][temps2.nowy]==0)
		{
			q.push(temps2);
			vis[temps2.nowx][temps2.nowy]=1;
		}
		
		temps2=temps1;
		--temps2.nowx;
		if((temps2.nowx)<=5&&temps2.nowx>0&&maps[temps2.nowx][temps2.nowy]==0&&vis[temps2.nowx][temps2.nowy]==0)
		{
			q.push(temps2);
			vis[temps2.nowx][temps2.nowy]=1;
		}
	}
	
	pri();
}



int main()
{
	//freopen("f:/input.txt", "r", stdin);

		CLR(maps,0);
		CLR(vis,0);
		CLR(a,0);
		CLR(r,0);
		for(int i=1;i<=5;i++)
			for(int j=1;j<=5;j++)
				scanf("%d",&maps[i][j]);
		a[1][1].nowx=1;
		a[1][1].nowy=1;
		vis[1][1]=1;
		q.push(a[1][1]);
		bfs();
		
		
}