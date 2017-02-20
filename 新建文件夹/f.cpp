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

long long gcd(long long a,long long b)
{
	long long c;
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return b;
}

int main()
{
	long long i,j,k,zu,n,mi,numb,f;
	long long a[101];
	long long b[101];
	long long c[101];
	scanf("%lld",&zu);
	while(zu--)
	{
		scanf("%lld",&n);
		scanf("%lld",&a[0]);
		b[0]=a[0];
	
		for(i=1;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[i]=a[i];
			
		}
		c[0]=gcd(a[0],a[1]);
		mi=c[0];
		for(i=0;i<n-1;i++)
		{
			c[i]=gcd(a[i],a[i+1]);
			if(mi>c[i])
			mi=c[i];
		}
		
		
		for(;mi>=1;mi--)
		{
			f=0;
			numb=0;
			for(i=0;i<n;i++)
			{
				while(b[i]>=mi)
				{
					b[i]-=mi;
					numb++;
				}
				
				if(b[i]>0)
				{	b[i]=a[i];
					f=1;
					break;
				}
				b[i]=a[i];
			}
			if(f==0)
			{
				printf("%lld\n",numb);
				break;
			}
		}
	} 
}