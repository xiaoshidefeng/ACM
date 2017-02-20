#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;

int huajian(int a,int b)
{
	int i;
	if(a<b)
	{
		i=a;
		a=b;
		b=i;
	}
	while(a%b!=0)
	{
		i=a%b;
		a=b;
		b=i;
	}
	return i;
} 

int main()
{
	int i,j,k,n,a,b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		if((a%b)==0)
		{
			printf("%d\n",a/b);
			continue;
		}
		if(a==0)
		{
			printf("0\n");
			continue;
		}
		k=huajian(a,b);
		printf("%d/%d\n",a/k,b/k);
	}
}