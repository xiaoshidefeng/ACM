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

int n,m;

int maps[20][20];
int vis[20][20];



int main()
{
	//freopen("f:/input.txt", "r", stdin);

	while(scanf("%d%d",&n,&m)!=EOF)
	{
		CLR(maps,0);
		CLR(vis,0);
		
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				scanf("%d",&maps[i][j]);
		
		
	}
}