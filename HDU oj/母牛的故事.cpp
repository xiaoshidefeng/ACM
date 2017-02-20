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

__int64 cow[56];

__int64 cows(__int64 a)
{
	__int64 i,j,k;
	if(a>4)
	{
		k=cows(a-1)+cows(a-3);
	}
	else
	{
		k=a;
	}
	return k;
}

int main()
{
	__int64 i,j,k,l,sum;
	cow[1]=1;
	cow[2]=2;
	cow[3]=3;
	cow[4]=4;
	for(i=5,j=2;i<=55;i++)
	{
		cow[i]=cow[i-1]+j;
		j++;
	}
	while(scanf("%I64d",&j)!=EOF)
	{
		if(j==0)
		break;
		printf("%I64d\n",cows(j));
	}
}