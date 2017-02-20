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
	int i,j,k=0,l,n,f;
	int a[11100];
	i=19880101;
	for(;i<19891231;i++)
	{
		for(j=2,f=0;j<11000;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		
		if(a[i]%100<=31)
		{
			if(a[i]==19890007||a[i]==19890019||a[i]==19890029||a[i]==19880431||a[i]==19890631)
			continue;
			n=a[i]-(a[i]/10000)*10000;
			
			if(n<=1231)
			printf("%d\n",a[i]);
		}
	}
}