#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	double x,n,bit,b,c,d;
	int y;
	int q[100]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765};
	while(scanf("%lf",&n)!=EOF)
	{
	//	printf("%lf\n",n); 
		if(n>20)
		{
		b=(1+sqrt(5.0))/2.0;
		c=(1-sqrt(5.0))/(b*2.0);
		x=n*log10(b)-log10(sqrt(5.0));//+log(1-(pow(c,n)));//(((pow(b,n))-pow(c,n)));
		//printf("%lf\n",x);
		y=x;//printf("%lf\n",pow(10,x));
		bit=x-(double)y;
		bit=pow(10,bit);
		//printf("%lf\n",x);
		while(bit<1000)
		{
			bit*=10;
		}
		y=bit;
		printf("%d\n",y);   
	 	}
		else
		{
		  y=(int)n;
		  printf("%d\n",q[y]); }
	}
} 