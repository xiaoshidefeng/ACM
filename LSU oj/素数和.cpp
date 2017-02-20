#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	long long a,b,c,i,j,f,sum=0;
	scanf("%lld%lld",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		f=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			sum+=i;
		}
	}
	printf("%lld\n",sum);
}