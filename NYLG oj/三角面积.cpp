#include<stdio.h>
#include<math.h> 
int main(void)
{
	int x1,x2,x3,y1,y2,y3,b;
	double s,a;
	b=10000;
	while(b--){
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		
		if(x1==0&&x2==0&&x3==0&&y1==0&&y2==0&&y3==0)
			break;
			
		s=0.5*(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2);
		a=fabs(s);
		printf("%.1lf\n",a);
	}
	return 0;
}