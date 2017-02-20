#include<stdio.h>
int main()
{
	int a,b,num;
	a=5; 
	b=6; 
	num=a*a+b*b;
	if(num<=100)
		printf("%d\n",num);
	else
		printf("%d\n",num/100);
} 