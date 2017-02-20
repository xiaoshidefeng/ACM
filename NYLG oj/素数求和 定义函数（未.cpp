#include<stdio.h>
int prime(int);
int main(void)

{
	int a,c,d,zu,ge,num;
	scanf("%d",&a);
	while(a--){
		num=0;
		scanf("%d",&ge);
		while(ge--){
			scanf("%d",&d);
			c=prime(d);
			if(c==1)
				num=num+d;
				
			
		}
		printf("%d",num);
	}
}


int prime(int b)
{
	int a,num;
	b=1;
	for(a=2;a*a<=num;a++){
			if(num%a==0)
					b=0;
	}
			
		
	return b;
}