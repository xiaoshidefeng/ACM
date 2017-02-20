#include<stdio.h>
int main()
{
	int a,i,b,num;
	scanf("%d",&a);	
	for(num=0;a>=2;a--){
		b=0;
		for(i=2;i*i<=a;i++){			
			if((a%i)==0){
				b=1;	
				break;							
			}
		}
		if(b==0)
			num++;
	}
	printf("%d\n",num);
} 