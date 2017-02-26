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

char c[100];

int main()
{
	int k,i,j,n,len1,f;
	while(scanf("%s%d",c,&k)!=EOF)
	{
		len1=strlen(c);
		if(len1<=k)
		{
			printf("%d\n",len1-1);
			continue;
		}
		n=0;
		j=0;
		for(i=len1-1;i>=0;i--)
		{
			if(j==k)
				break;
			if(c[i]!='0')
			{
				++n;
				
			}else{
				++j;
			}
		}
		if(i<0)
		{
			printf("%d\n",len1-1);
			continue;
		}
			
			
		printf("%d\n",n);
	}
	
	
}
