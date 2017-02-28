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
typedef struct moneys{
	int val;
	int wei;
}moneys;
int dp[501];
moneys m[501];
int main()
{
	int zu,i,j,k,n,e,f;
	scanf("%d",&zu);
	while(zu--)
	{
		memset(dp,999999,sizeof(dp));
		memset(m,0,sizeof(m));
		scanf("%d%d",&e,&f);
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&m[i].val,&m[i].wei);
		}
		e=e-f;
		dp[0]=0;
		for(i=0;i<n;i++)
		{
			for(j=m[i].wei;j<e;j++)
			{
				dp[j]=min(dp[j],dp[j-m[i].wei]+m[i].val);
			}
		}
		if(dp[f]==999999)
			printf("This is impossible.\n");
		else
			printf("The minimum amount of money in the piggy-bank is %d.\n",dp[e]);
		
	}
}