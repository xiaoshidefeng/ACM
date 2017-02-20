#include<stdio.h>
int main(void)
{
	int a,b,c,z,x,y,t,z1,x1;
	
	scanf("%d\n",&c);
	int d[c];
	scanf("%d\n",&a);
	scanf("%d",&b);	
	z1=-1;
	while(z1<a-1){
		z1=z1+2;
		printf("%d ",z1);
	}
	printf("\n");
	y=0;
	while(y<a){
		y=y+2;
		printf("%d ",y);
	}
	printf("\n");
	printf("\n");
	x1=-1;
	while(x1<b-1){
		x1=x1+2;
		printf("%d ",x1);
	}
	printf("\n");
	t=0;
	while(t<b){
		t=t+2;
		printf("%d ",t);
	}	
	return 0;
}