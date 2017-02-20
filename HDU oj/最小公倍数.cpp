#include<stdio.h>
int main(void)
{
	int a,b,min,max,zu,i,c;
		while(scanf("%d%d",&a,&b)!=EOF){
			i=a*b;
		if(a<b){
			c=a;
			a=b;
			b=c;
		}
		while(a%b!=0){
			c=(a%b);
			a=b;
			b=c;
		}
		min=b;		
		printf("%d\n",i/min);
	}
	return 0;
}