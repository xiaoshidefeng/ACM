#include<stdio.h>
int main(void)
{
	for(int a=1;a<=9;a++){
		for(int b=1;b<=a;b++){
			printf("%d*%d=%d\t",a,b,a*b);
		}
		printf("\n");
	}
	return 0;
} 