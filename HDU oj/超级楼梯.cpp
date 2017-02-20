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

__int64 fib[50];
int main()
{
	int i,j,k;
	fib[1]=1;
	fib[2]=1;
	
	for(i=3;i<50;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	scanf("%d",&j);
	while(j--)
	{
		scanf("%d",&k);
		printf("%I64d\n",fib[k]);
	} 
}