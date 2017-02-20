#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[14]={0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		if(x==0)
			break;
		printf("%d\n",a[x]);
	}
}