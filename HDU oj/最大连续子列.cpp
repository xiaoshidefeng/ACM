#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int  a[10001];
int main()
{
	int n,maxnum,now,i,j;
	while(scanf("%d",&n)!=EOF)
	{
		
		if(n==0)
		break;
		memset(a,0,sizeof(a)); 
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
		}
		now=maxnum=0;
		for(i=0;i<n;i++)
		{
			now+=a[i];
			if(maxnum<now)
			maxnum=now;
			else if(now<0)
			now=0;
			
		}
		printf("%d\n",maxnum);
		
		
	}
}