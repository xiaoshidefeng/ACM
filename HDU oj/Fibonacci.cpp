#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define a 
int main()
{
	double x,n,bit,b,c,d;
	int y;
	while(scanf("%lf",&n)!=EOF)
	{
		
		b=(1.0+sqrt(5))/2.0;
		c=(1.0-sqrt(5))/2.0;
		x=(1.0/sqrt(5))*((pow(b,n))-pow(c,n));
		//printf("%.0lf\n",x);
		y=log10(x);//printf("%lf\n",log10(x));
		bit=log10(x)-(double)y;
		bit=pow(10,bit);
		while(bit<1000)
		{
			bit*=10;
		}
		printf("%.0lf\n",bit);
	}

	
} 