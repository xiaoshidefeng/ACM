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
	int a,b,c,d,i,j,k,f,n;
	a=19880101;
	b=19881231;
	c=19890101;
	d=19891231;
	for(i=a;i<=b;i++)
	{
		f=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			n=i-i/100*100;
			if(n<31)
			printf("%d\n",i);
		}
			
	}
	for(i=c;i<=d;i++)
	{
		f=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			n=i-i/100*100;
			k=i-i/10000*10000;
		
			if(n<=31&&k!=631)
			printf("%d\n",i);
		}
			
	}
	
}