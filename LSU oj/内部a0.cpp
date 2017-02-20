#include<stdio.h>
int main()
{
	double s,v,r;
	while((scanf("%lf",&r))!=EOF){
		s=4*3.1415926535898*r*r;
		v=4*r*r*r*3.1415926535898/3;
		printf("%.2lf %.2lf\n",s,v);		
	}
	return 0;
} 