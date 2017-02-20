#include<stdio.h>
int main(void)
{
	int a,b;


		
		while(scanf("%d",&b)!=EOF)
		{
		if(90<=b&&b<=100)		
			printf("A\n");			
		else if(80<=b&&b<90)
			printf("B\n");			
		else if(70<=b&&b<80)
			printf("C\n");			
		else if(60<=b&&b<70)			
			printf("D\n");			
		else if(0<=b&&b<60)
			printf("E\n");
		else
			printf("Score is error!\n");
		}

	
	return 0;
}