#include<stdio.h>
#include<math.h>
int main(void)
{
	int zu;
	float d,d3,x1,y1,x2,y2,d1,d2;
	scanf("%d",&zu);
	while(zu--){
		scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
		d1=x1-x2;
		d2=y1-y2;
		d3=d1*d1+d2*d2;
		d=sqrt(d3);
		printf("%.2f\n",d);
	}
	return 0;
}