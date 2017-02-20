#include<stdio.h>
int main()
{
	__int64 a;
	int i,zu,x=6;
	scanf("%d",&zu);
		for(i=0;i<zu;i++)
	{
		scanf("%I64d",&a);
		printf("%I64d\n",a%100000+600000);
	}
}