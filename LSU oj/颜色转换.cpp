#include<stdio.h>
int main()
{
	int zu,b,g,r;
	
	scanf("%d",&zu);
	while(zu--){
		scanf("%d%d%d",&r,&g,&b);
		printf("%d\n",(r*299+g*587+114*b)/1000);
	}	
}