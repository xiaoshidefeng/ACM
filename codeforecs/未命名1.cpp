#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[100];
	int i,j,n,min;
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
		}
		if(a[0]>15)
		{
			printf("15\n");
			continue;
		}
		if(n==1)
		{
			min=a[0]+15;
			printf("%d\n",min);	
			continue;
		}
		
		min=0;
		for(i=1;i<n;i++)
		{
			if(a[i]-a[i-1]<=15)
			min=a[i]+15;
			else
			{
				min=a[i-1]+15;
				break;
			}
		
		}
		if(min>=90)
		printf("90\n");
		else
		printf("%d\n",min);
	}	
}