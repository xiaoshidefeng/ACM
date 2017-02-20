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
	__int64 a,b,c,ma,mi,j,i,k,m,f;
	while(scanf("%I64d%I64d",&a,&b)!=EOF)
	{
		f=0;
		if(a>b)
		{
			c=a;
			a=b;
			b=c;
			f=1;
		}
		ma=1;
		for(i=a;i<=b;i++)
		{	j=1;
			c=i;
			while(c!=1)
			{
				j++;
				if(c%2==0)
				c/=2;
				else
				c=3*c+1;
			}
			if(j>ma)
			ma=j;
		}
		if(f==0)
		printf("%I64d %I64d %I64d\n",a,b,ma);
		else
		printf("%I64d %I64d %I64d\n",b,a,ma);
	} 
}