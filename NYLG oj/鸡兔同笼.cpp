#include<stdio.h>
int main (void)
{
	int ji,tu,jiao,num,i,q;
	printf("使用方法:\n一行输入两个数 分别代表鸡兔总数 和 脚的个数（鸡2脚 兔4脚）"); 
	scanf("%d",&i);
	while(i--!=0){
		scanf("%d",&num);
		scanf("%d",&jiao);
		tu=(jiao-2*num)/2;
		ji=num-tu;
		if(ji<0||tu<0||jiao%2==1)
			
			printf("No answer\n");
		else	
            printf("%d %d\n",ji,tu);
	}
	
	return 0;
}