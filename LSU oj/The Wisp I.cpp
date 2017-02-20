#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

typedef struct mi{
	int ai;
	int bi;
	
} mi;


mi a[10001]; 
int main()
{
	int i,j,n,zu;
	int maxn,maxn2;
	scanf("%d",&zu);
	while(zu--)
	{
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		maxn=1;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[i].ai,&a[i].bi);
			if(a[i].bi<=maxn&&a[i].ai>maxn)
			maxn=a[i].ai;
		}
		for(i=n-1;i>=0;i--)
		{
			if(a[i].bi<=maxn&&a[i].ai>maxn)
			maxn=a[i].ai;
		}
		for(i=n-1;i>=0;i--)
		{
			if(a[i].bi<=maxn&&a[i].ai>maxn)
			maxn=a[i].ai;
		}
		for(i=0;i<n;i++)
		{
			
			if(a[i].bi<=maxn&&a[i].ai>maxn)
			maxn=a[i].ai;
		}
		for(i=0;i<n;i++)
		{
			if(a[i].bi<=maxn)
			printf("1");
			else
			printf("0");	
		}
			printf("\n");
	}
}