#include<stdio.h>
int main(void)
{
	int num,a,b;
	printf("———————————质数判断器———————————\n");
	printf("使用说明：\n");
	printf("输入一个大于2的整数后按回车，即可知道该数是否是质数。\n"); 
	printf("输入 q 退出程序\n"); 
	b=1;
	while(scanf("%d",&num)==1){
		while(num<=2){
			printf("熊孩子 请输入大于2的整数\n");
			scanf("%d",&num);	
			}
			
		
		for(a=2;a*a<=num;a++){
			b=0;
			if(num%a==0){
				
			
					b=0;
				printf("%d 不是质数，它能被%d 和 %d 整除\n",num,a,num/a);
			}
		}
	if(b==1)
		printf("%d是质数\n",num);	
		
	}
	printf("see you\n");
	getchar ();
	return 0;
	
	
	
}