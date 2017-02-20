#include<stdio.h>
int main()
{
	int zu,xin,num;
	double nan,n;
	scanf("%d",&zu);
	num=0;
	while(zu--){
		scanf("%d",&xin);
		if(xin==1){
			scanf("%lf",&nan);
			if(nan<8.1)
				num++;
		}
		if(xin==0)
			{
			scanf("%lf",&n);
			if(n<9.1){
				num++;
			}			
		}
	} 
	printf("%d\n",num);
} 