#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[500];
int main()
{
	int i,j,n,t;
	double zon,ge;
	scanf("%d",&t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		zon=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{	ge=1;
			for(;a[i]==a[i+1];)
			{
				i++;
				ge++;
			}
			zon+=(ge/(double)(n-1))*((double)n-(double)i-1)/(double)n;
		}
		printf("%lf\n",zon);
	}	
}