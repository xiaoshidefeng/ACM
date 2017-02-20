#include<stdio.h>
int main(void)
{
	int a,b,c,y,i,num,zu;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d",&num);
		if(num==1){
			printf("2 1\n");
			continue;
		}
//**********************
		y=1;
		for(i=2;i*i<=num;i++){
		if((num%i)==0){
			y=0;
			break;
			}
		}
		if(y==1){
			printf("%d 0\n",num);
			continue;
		}
//***********************1
		for(a=num;a>2;){
			a--;
			y=1;
			for(i=2;i*i<=a;i++){
				if((a%i)==0){
					y=0;
					break;
					}
				}			
		  	if(y==1)		  		
		  		break;
			}
//***********************2
		for(b=num;b<(2*b);){
			b++; 
			y=1;
			for(i=2;i*i<=b;i++){
				if((b%i)==0){
					y=0;
					break;
					}
				}
		  	if(y==1)
		  		break;		
		}
//*************************
		if(((num-a)-(b-num))<=0)
			printf("%d %d\n",a,num-a);
		if(((num-a)-(b-num))>0)
			printf("%d %d\n",b,b-num);
	}	
	return 0;
}