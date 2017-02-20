#include<stdio.h>
#include<stdlib.h> 
#include<algorithm>
using namespace std;
int main()
{
	int b,n;
	double a[1000];
	double sum;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		for(b=0;b<n;b++)
		{
			scanf("%lf",&a[b]);
			
		}
		sort(a,a+n);
		//a[0]=a[n-1]=0;
		for(b=1;b<n-1;b++)
		{
			sum+=a[b];
		}
		printf("%.2lf\n",sum/(n-2));
	}
} 