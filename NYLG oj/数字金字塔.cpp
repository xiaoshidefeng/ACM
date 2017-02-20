#include<stdio.h>
int main(void)
{
	int a,b,c,i;
	i=7;
	for(a=0;a<=i;a++)		
		{
			for(b=7;b>a;b--){
				printf(" ");	
			}
			for(c=1;c<=a;c++)
				printf("%d",c);
				for(;c>=1;c--){
						printf("%d",c);						
				}
			printf("\n");	
		}
	 return 0;
}