#include<stdio.h>
int main()
{
	float gao,pu,num1,num2,a,b,gao1,pu1;
	scanf("%f%f",&gao,&pu);
	num1=0;
	num2=0;
	gao1=gao;
	pu1=pu;
	while(gao--){
		scanf("%f",&a);
		num1=num1+a;
	}
	num1=num1/gao1;

	while(pu--){
		scanf("%f",&b);
		num2=num2+b;
	}
	num2=num2/pu1;
	
	printf("%.2f\n",(0.6*num1)+(0.4*num2));
}