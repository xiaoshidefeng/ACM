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

int a[1001]; 

int main()
{
	int i,j,k,n;
	a[1]=1;
	for(i=2,j=2;i<=1000;i++)
	{
		a[i]=a[i-1]+j;
		j=j+2;
	}
	scanf("%d",&n);
	if(n==1)
	{
		printf("1*1=1=1\n");
		return 0;
	}
	
	
	printf("%d*%d*%d=%d=%d",n,n,n,n*n*n,a[n]);
	
	for(i=1,k=a[n]+2;i<n;i++)
	{
		printf("+%d",k);
		k=k+2;
	}
	printf("\n");
	
	
}