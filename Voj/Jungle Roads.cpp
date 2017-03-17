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

typedef struct kru{
	int pre,next,val;
}kru;

bool cmp ( const kru &a,const kru &b)
{
	return a.val<b.val;
}

kru a[30000];
int pre[30000];
int cunt;

int finds(int x)
{

	return x==pre[x]?pre[x]:pre[x]=finds(pre[x]);
	
}

void join(int a,int b,int v)
{
	int p1 = finds(a);
	int p2 = finds(b);
	if(p1==p2) return;
	pre[p2] = p1;
	cunt+=v;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j,k,n,m,idx;
	char c[3],d[3];
	while(scanf("%d\n",&n)!=EOF&&n)
	{
		idx=0;
		cunt=0;
		for(j=1;j<n;j++)
		{
			scanf("%s%d",c,&k);
			for(m=0;m<k;m++)
			{
				getchar();
				scanf("%s%d",d,&a[idx].val);
				a[idx].next = d[0];
				a[idx].pre = c[0];
				++idx;
				
			}
		}
		
		sort(a,a+idx,cmp);
		
		for(i=0;i<200;i++)
		{
			pre[i]=i;
		}
		
		for(i=0;i<idx;i++)
		{
			join(a[i].pre,a[i].next,a[i].val);
		}
		printf("%d\n",cunt);
	}
	
}