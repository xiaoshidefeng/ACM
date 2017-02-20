#include<stdio.h>
#include<math.h> 
int main()
{
	double a,num,zon,b;
	int zu;
	scanf("%d",&zu);
	while(zu--){
		scanf("%lf",&num);
		b=log10(num);                    //取对数 
		zon=num*b;
		a=pow(10,(zon-(long long int)(zon)));
		for(int i=0;a>=10;i++){
			a/=10;			
		}
		printf("%d\n",(long long int)(a));//必须用long long int 否则还是太大溢出 
	}
} 