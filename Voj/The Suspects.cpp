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

int pre[30003];
int cnt[30003];

int finds(int x)
{
	if(x!=pre[x])
		pre[x]=finds(pre[x]);
	return pre[x];
} 

void join(int a,int b)
{
	int p1=finds(a);
	int p2=finds(b);
	if(p1==p2) return;
	if(cnt[p1]>=cnt[p2])
	{
		pre[p2]=p1;
		cnt[p1]+=cnt[p2];
	}else{
		pre[p1]=p2;
		cnt[p2]+=cnt[p1];
	}

}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,m,i,j,k,q,firs,cunt;
	while(scanf("%d%d",&n,&m)!=EOF&&(n||m))
	{
		for(i=0;i<n;i++)
		{
			pre[i]=i;
			cnt[i]=1;
		}
			
		while(m--)
		{
			scanf("%d%d",&k,&firs);
			for(i=1;i<k;i++)
			{
				scanf("%d",&q);
				join(firs,q);
			}
		}

		printf("%d\n",cnt[pre[0]]);
	} 
}
