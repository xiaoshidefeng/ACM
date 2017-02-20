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

int bu=0;

int hannuo(int n)
{
	if(n==1)
		return n;
	
		n=n%20142014;
	bu++;
	hannuo(n-1);
	hannuo(n-1);
}

int ha[10001];



int main()
{
	int n,i,j,k;
	
	for(i=2,ha[1]=1;i<=10000;i++)
	{
		ha[i]=2*ha[i-1]+1;
		if(ha[i]>20142014)
		{
			ha[i]=ha[i]%20142014;
		}
	}
	
	
	scanf("%d",&k);
	while(k--)
	{
		bu=0;
		scanf("%d",&n);
		
		
		printf("%d\n",ha[n]);
	} 
}