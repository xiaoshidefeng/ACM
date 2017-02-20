#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	__int64 i,zu,a,b,sum;
	double q,w;
	scanf("%I64d",&zu);
	while(zu--)
	{
		
		sum=1;
		w=0;
		scanf("%I64d",&a);
		for(i=1;i<=a;i++)
		{
			q=log10(i);
			w+=q; 
		}
		//printf("%lf\n",w);
		printf("%d\n",(int)(w)+1);
	}	
}