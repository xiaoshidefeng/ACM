#include<stdio.h>
int main(void)
{
	int zu,a,b,i,j,n,num,y,x;
	scanf("%d",&zu);
	while(zu--){
		num=0;
		scanf("%d%d",&a,&b);  			
		for(i=2;i<=a;i++){ 
			j=i;
			while((j%b)==0){		//Á¬³ý 
				num++;
				j=j/b;
				}				
			}
		printf("%d\n",num);
	}
	return 0;
}