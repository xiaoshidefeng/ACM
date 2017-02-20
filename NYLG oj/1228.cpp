#include<stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=0;
	if(b>c)
		{d=c;
		c=b;
		b=d;}
	if(a>b)
		{d=a;
		a=b;
		b=d;}	
	if(b>c)
		{d=b;
		b=c;
		c=d;}
	printf("%d %d %d",a,b,c);
	getchar ();
	return 0;
} 