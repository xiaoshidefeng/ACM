#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	long long a,b,c,j,i,k,f;
	while(scanf("%lld",&a)!=EOF)
	{
	for(i=2,j=a-2;i<=a/2;i++,j--)
	{
		f=0;
		for(k=2;k<j;k++)
		{
			if(j%k==0)
			{
				f=1;
				break;
			}
		}
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("%lld %lld\n",i,j);
			break;
		}
		
	}	
	}
}