#include<stdio.h>
int main(void)
{
	int a,b,c,max,min,mid;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
		max=a;
		min=b;
	if(a<b)
		max=b;
		min=a;
	if(c>max)
		max=c;
	if(c<min)
		min=c;
	if(min<a&&a<max)
		mid=a;
		if(min<b&&b<max)
			mid=b;
		if(min<c&&c<max)
				mid=c;
	printf("%d %d %d",min,mid,max);
	getchar ();
	return 0;
} 