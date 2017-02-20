#include<stdio.h>
int main(void)
{
	int zu,num,n,a;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&zu);
		num=0;
		while(zu--){
			scanf("%d",&n);
			num=n+num;
		}
		if(a>0){
				printf("%d\n",num);
				printf("\n");
		}
		if(a==0)
			printf("%d\n",num);
	
	}
	
} 