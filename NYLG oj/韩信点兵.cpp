#include<stdio.h>
int main(void)
{
	int a,b,c,num,i,num2,y;
	int d[150];
		scanf("%d%d%d",&a,&b,&c);
		for(i=0,num=10;num<100;i++){
			num=c+7*i;
			d[i]=num; 
		}
		y=0;
		for(;i>0;i--){
			if(((d[i]-b)%5)==0&&((d[i]-a)%3)==0){
				num2=d[i];
				y=1;
				break;
				}
		}
		if(y==1)
			printf("%d\n",num2);
		if(y==0)
			printf("No answer");		
	return 0;
} 