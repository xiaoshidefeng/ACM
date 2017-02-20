#include<stdio.h>
int yin(int a);

int yin(int a,int hui){
	int b,c;
	b=hui;
	while(a%b!=0){
			c=(a%b);
			a=b;
			b=c;
		}
	return 	b;
}

int main()
{
	int hui,num,x,i,zu,hui2;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d",&hui);
		hui2=hui;
	for(num=hui;num>=2;num--){
		x=yin(num,hui);
		if(x!=1){
			hui2--;
		}
	}
	printf("%d\n",hui2);
	}
	
}