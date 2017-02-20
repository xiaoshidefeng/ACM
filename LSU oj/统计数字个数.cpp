#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a[6];
	memset(a,0,sizeof(a));
	int zu,x;
	scanf("%d",&zu);
	for(int i=0;i<zu;i++)
	{
		scanf("%d",&x);
		a[x]++;
	}
	printf("%d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5]);
}