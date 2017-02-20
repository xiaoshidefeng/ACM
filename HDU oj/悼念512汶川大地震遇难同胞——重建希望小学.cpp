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
int main() 
{
	int b,c,j,i,k;
	int a[50];
	a[1]=1;
	for(i=2;i<50;i++)
	{
		if(i%2==0) 
		a[i]=a[i-1]*2+1;
		else
		a[i]=a[i-1]*2-1;
	}
	scanf("%d",&j);
	while(j--)
	{
		scanf("%d",&k);
		printf("%d\n",a[k]);
	}
}