#include<stdio.h>
int main()
{
	int num,a,b,zu,i;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d",&a);
		if(a<10){
			b=a;	
		for(i=1;i<b;i++){
			a=(a*b)%10;
						}
		printf("%d\n",a);
		continue;
				}
		b=a%10;
		a=a%10;
		for(i=1,num=a;i<b;i++)
			a=(a*num)%10;
		printf("%d\n",a);
	}
	return 0;
} 