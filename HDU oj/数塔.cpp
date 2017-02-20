#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int maxn(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int dp[111][111];
	int casenum,high,j,i;
	scanf("%d",&casenum);
	while(casenum--)
	{
		scanf("%d",&high);
		for(i=0;i<high;i++)
		{
			for(j=0;j<=i;j++)
			{
				scanf("%d",&dp[i][j]);
			}
		}
		for(i=high-2;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				dp[i][j]=maxn(dp[i+1][j],dp[i+1][j+1])+dp[i][j];
			}
		}
		printf("%d\n",dp[0][0]);
	}
}