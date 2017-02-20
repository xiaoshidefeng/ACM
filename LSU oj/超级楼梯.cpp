#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

long long a[42]={0,1,2};
int main()
{
	long long c,i,j,k;
	for(i=3;i<=41;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	scanf("%lld",&j);
	while(j--)
	{
		scanf("%lld",&i);
		printf("%lld\n",a[i-1]);
	}
}