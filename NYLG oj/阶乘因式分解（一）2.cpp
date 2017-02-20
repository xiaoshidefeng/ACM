#include<stdio.h>
int main(void)
{
	int a,b,c,i,zu,x,n,num;
	float m;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d%d",&num,&c);
		for(b=1,a=1;a<num;a++)
			b=b*a;
		for(i=1,x=c;c<b;c=c*x){
			i++;
			m=b/c;
			n=(int)m;
			if((m-n)>0){
				break;
			}
		}
	printf("%d\n",i);
	}
	return 0;
} 