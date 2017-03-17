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

typedef struct node{
	int pre,next,val;
}node;

int pre[10000];
int cunt;

bool cmp (const node &q,const node &w )
{
	return q.val<w.val;
}

int finds(int x)
{
	return x==pre[x]?pre[x]:pre[x]=finds(pre[x]);
}

void join(int x,int y,int v)
{
	int p1 = finds(x);
	int p2 = finds(y);
	if(p1==p2) return;
	
	pre[p2]=p1;
	cunt+=v;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int  i,j,k,n,m,a,b,c,v,f,cnt;
	while(scanf("%d",&n)!=EOF&&n)
	{
		//set<node>s;
		scanf("%d",&m);
		node nd[10000];
		cnt=0;
		cunt=0;
		for(i=0;i<m;i++)
		{
			f=0;
			scanf("%d%d%d",&a,&b,&c);
			if(a>b)
			{
				k=b;
				b=a;
				a=k;
			}

			for(j=0;j<i;j++)
			{
				if(a==nd[j].pre&&b==nd[j].next&&nd[j].val>c)
				{
					nd[j].val=c;
					f=1;
					break;
				}
			}
			if(f==0)
			{
				++cnt;
				nd[i].pre=a;
				nd[i].next=b;
				nd[i].val=c;
			}
		}
		for(i=0;i<10000;i++)
			pre[i]=i;
		sort(nd,nd+cnt,cmp);
		
		for(i=0;i<cnt;i++)
		{
			join(nd[i].pre,nd[i].next,nd[i].val);
		}
		
		printf("%d\n",cunt);
	} 
}