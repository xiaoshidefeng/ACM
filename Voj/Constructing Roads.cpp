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

struct nd{
	int x,y,val;
};

int a[105][105];
int cnt;
nd w[5051];
int pre[105];
int b[105][105]; 

bool cmp(const nd &a,const nd &b){
	return a.val<b.val;
}

int finds(int u){
	return u==pre[u]?u:pre[u]=finds(pre[u]);
}

void join(int a, int b,int v)
{
	int p1 = finds(a);
	int p2 = finds(b);
	if(p1==p2)	return;
	pre[p2]=p1;
	cnt+=v;
}


int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j,k,n,m,zu,q;
	while(scanf("%d",&zu)!=EOF)
	{
		CLR(a,0);
		CLR(w,0);
		CLR(b,0);
		k=0;
		cnt = 0;
		for(i=0;i<zu;i++)
		{
			for(j=0;j<zu;j++)
				scanf("%d",&a[i][j]);
		}
		
		scanf("%d",&q);
		while(q--)
		{
			scanf("%d%d",&n,&m);
			b[n-1][m-1]=b[m-1][n-1]=-1;
		}
		
		
		for(i=1,j=0;i<zu;i++)
		{
			for(j=0;j<i;j++)
			{
				w[k].x = i;
				w[k].y = j;
				if(b[i][j]==-1)
					w[k].val = 0;
				else
					w[k].val = a[i][j];
				++k;
			}
				
		}
		for(i=0;i<=100;i++)
			pre[i]=i;
		
		
		sort(w,w+k,cmp);
		for(i=0;i<k;i++)
		{
			join(w[i].y,w[i].x,w[i].val);
		}
		
		printf("%d\n",cnt);
		
	} 
	
	
}