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

int a[1011];
int dp[1011]; 

int main()
{
	int n,i,j,k,m;
	
	while(scanf("%d",&n)!=EOF&&n)
	{
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		sort(a,a+n);
		if(m<5)
		{
			printf("%d\n",m);
			continue;
		}
		for(i=0;i<n-1;i++)
		{
			for(j=m-5;j>=a[i];j--)
			{
				dp[j]=max(dp[j],dp[j-a[i]]+ a[i]);
			}
		}
		printf("%d\n",m-dp[m-5]-a[n-1]);
		
	}
}