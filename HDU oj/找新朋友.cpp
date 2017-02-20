#include<stdio.h>
int oula(int num);
//////////Å·À­º¯Êý 
int oula(int num){
	int x,n=1;
	for(x=2;x*x<=num;x++){
		if(num%x==0){
			num=num/x;
			n=n*(x-1);
			while(num%x==0){
				num=num/x;
				n=n*x;
			}
		}		
	}	
	if(num>1)
	n=n*(num-1);	
	return n;
}
/////////////////mainº¯Êý 
int main()
{
	int num,zu;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d",&num);
		printf("%d\n",oula(num));
	}
	return 0;
}