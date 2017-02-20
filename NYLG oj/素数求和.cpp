#include<stdio.h>
int main(void)
{
	int a,b,c,d,zu,zon,ge;
	scanf("%d",&zu);
	while(zu--){
		
		scanf("%d",&ge);
		zon=0; 
		while(ge--){
			c=1;
			scanf("%d",&a);
			for(b=2;b<a;b++){
				if((a%b)==0&&a!=2&&a!=1){
					c=0;                    					
					break;        
					}
			}
			if(c==1&&a!=1){
				zon=zon+a;
		
			}
		}
		printf("%d\n",zon);
	}
	return 0;
}