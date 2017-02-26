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

typedef struct bone{
	
	int a;
	int b; //a means value   b means volume 
}bone;

bone x[1001];
int dp[999999];

bool cmp(const bone q,const bone w){
	return q.a>w.a?w.a:q.a;
}

int main()
{
	int zu,n,j,i,k,v;
	scanf("%d",&zu);
	while(zu--)
	{
		memset(x,0,sizeof(x));
		memset(dp,0,sizeof(dp));
		scanf("%d%d",&n,&v);
		for(i=0;i<n;i++)
		{
			scanf("%d",&x[i].a);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&x[i].b);
		}
		sort(x,x+n,cmp);
		for(i=0;i<n;i++)
		{
			for(j=v;j>=x[i].b;j--)
			{
				dp[j]=max(dp[j],dp[j-x[i].b]+x[i].a);
			}
		}
		printf("%d\n",dp[v]);
	}
}