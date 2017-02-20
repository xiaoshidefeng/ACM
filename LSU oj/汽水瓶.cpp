#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		if(a==0)
		break;
		printf("%d\n",a/2);
	}
}