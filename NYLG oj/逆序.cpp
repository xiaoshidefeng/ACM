#include<stdio.h>
int main()
{
	int a[101];
	int num,b,i;
	i=1;
	do{
		scanf("%d",&b);		
		a[i]=b;
		i++;
	}while(b!=0);	
	for(;i>1;--i){
		printf("%d",a[i-1]);
	}
	
} 