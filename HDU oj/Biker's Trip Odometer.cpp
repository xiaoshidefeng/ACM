#include<stdio.h>
#define p 3.14159265359
int main()
{
	double d,times,n,wheel,total,ave;
	n=0;
	while(scanf("%lf%lf%lf",&d,&wheel,&times)!=EOF){
		if(wheel==0)
			break;
		n++;
		total=p*wheel*d/63360;
		ave=p*wheel*d*15/(264*times);
		printf("Trip #%.0lf: %.2lf %.2lf\n",n,total,ave);
	}
	return 0;
} 