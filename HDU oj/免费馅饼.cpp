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

int a[100001][12]; 

int maxthree(int a,int b,int c)
{
	int maxs = -0;
	if(a>maxs)
	{
		maxs = a;
	}
	if(b>maxs)
	{
		maxs = b;
	}
	if(c>maxs)
	{
		maxs = c;
	}
	return maxs;
}

int maxtwo(int a,int b)
{
	int maxs = -0;
	if(a>maxs)
	{
		maxs = a;
	}
	if(b>maxs)
	{
		maxs = b;
	}

	return maxs;
}

int main()
{

	int t; 
	int n,r,c,i,j,maxx;
	scanf("%d",&n);
	while(n!=0)
	{
		memset(a,0,sizeof(a));
		i=0;
	while(n--)
	{
		scanf("%d%d",&c,&r); //r–– c¡–
		++a[r][c]; 
		if(i<r)
			i=r;
	}
	
	for(;i>0;i--)
	{
		a[i-1][0] = maxtwo(a[i][0],a[i][1]) + a[i-1][0];
		for(j=1;j<11;j++)
		{
			a[i-1][j] = maxthree(a[i][j-1],a[i][j],a[i][j+1]) + a[i-1][j];
		}
	} 
	maxx=-1; 
	for(i=0;i<11;i++)
	{
		if(maxx<a[0][i])
		{
			maxx = a[0][i];
		}
	}
	printf("%d\n",a[0][5]);
	scanf("%d",&n);
	}
	
}