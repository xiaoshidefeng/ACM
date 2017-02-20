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
	int i,j,k,n,a,b;
	while(scanf("%d",&n)!=EOF)
	{
		k=n/3;
		for(i=3;i<=k;i++)
		{
			if(n%i==0)
			{
				a=n/i;
				if(a%2==1&&a!=1)
				{
					a=a/2;
					//ÆæÊý
					 if(i-a>0&&i+a<n)
					 {
 						printf("%d %d\n",i-a,i+a);
 						
 					}
				}
			}else
			{
				if(n%(i+i+1)==0)
				{
					a=i-n/(i+i+1)+1;
					b=i+n/(i+i+1);
					if(a>0&&b<n)
					printf("%d %d\n",a,b);
				}
			}
		}
		printf("\n");
	} 
}