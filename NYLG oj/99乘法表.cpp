#include<stdio.h>
int main (void)
{
	int a,b;
	a=0;
	b=0;
	
	while(a<9)
	{
		a++;
		b=0;
	
		while(b<a){
			
			b++;
			printf("%d*%d=%d\t",b,a,a*b);
		}
		printf("\n");
	}
	return 0;
} 