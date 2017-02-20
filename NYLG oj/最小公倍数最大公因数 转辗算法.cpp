#include<stdio.h>
int main(void)
{
	int a,b,min,max,zu,i,c;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d%d",&a,&b);
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
		printf("%d %d\n",min,i/min);
	}
	return 0;
}