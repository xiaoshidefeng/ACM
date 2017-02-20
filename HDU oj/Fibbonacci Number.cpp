#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	__int64 a[60];
	int x,i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<51;i++)
	{
		a[i]=a[i-1]+a[i-2];		
	}
	while(scanf("%d",&x)!=EOF)
	{
		if(x==-1)
		break;
		printf("%I64d\n",a[x]);
	}
}