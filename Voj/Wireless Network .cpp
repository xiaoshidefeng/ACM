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

typedef struct jf{
	
	int x,y,pre;
}jf;

jf a[22222];

bool vis[22222];
int n,i,j,k;

int finds(int x)
{
	if(x==a[x].pre)
		return a[x].pre;
	else{ return finds(a[x].pre);}
}

void check(int a,int b)
{
	int p1=finds(a);
	int p2=finds(b);
	if(p1==p2) printf("SUCCESS\n");
	else printf("FAIL\n");
}

void join(int e,int r)
{
	
	int p1=finds(e);
	int p2=finds(r);

	if(p1==p2) return;
	else
	{
		if((a[e].x-a[r].x)*(a[e].x-a[r].x)+(a[e].y-a[r].y)*(a[e].y-a[r].y)<=k*k)
		{
			
			a[p2].pre=p1;
		}
			
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int m;
	char c;
	CLR(vis,false);
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a[i].x,&a[i].y);
		a[i].pre=i;
	}
	while(scanf("\n%c",&c)!=EOF)
	{
		if(c=='O')
		{
			
			scanf("%d",&m);
			vis[m]=true;
			for(i=1;i<=n;i++)
			{
				if(vis[i]&&i!=m)
				{
					join(i,m);
				}
			}
			
		}else if(c=='S'){
			int q,w;
			scanf("%d%d",&q,&w);
			check(q,w);
		}else	break;
	}
}