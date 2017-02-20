#include<stdio.h>
__int64 jiecheng(int n)
{
	int i;
	__int64 x=1;
	for(i=1;i<=n;i++)
		x*=i;
	return x;
}
int main()
{
	int n,i;
	__int64 sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=jiecheng(i);
	printf("%I64d\n",sum);
	return 0;
}