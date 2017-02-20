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
char a[200];
long long b[200];
char c[200];
int main()
{
	long long i,j,k,m,len1,ge,sum,f=0,x,head;
	while(gets(a))
	{
		if(strcmp(a,"0")==0)
		break;
		len1=strlen(a);
		if(len1>=8)
		x=1;
		else
		{
			x=0;
		}
		
		for(i=0;i<len1;i++)
		{
			b[i]=a[i]-'0';
		} 
		head=0;
		while(len1>8)
		{
			ge=b[len1-1];
			ge=ge*5;
			len1--;
			b[len1-1]=b[len1-1]-ge;
			f=0;
			while(f==0)
			{
				for(i=head,f=1;i<len1;i++)
				{
					if(b[i]<0)
					{
						b[i-1]--;
						b[i]+=10;
						f=0;
						if(i-1==head&&b[head]==0)
						head++;
					}
				
				}
			
			}
		}
		if(x==1)
		{
			len1=8;
		}
		if(len1<=8)
		{
			
			sum=0;
			for(i=len1-1,k=1;i>=head;i--)
			{
				sum=sum+k*b[i];//printf("%d\n",sum);
				k=k*10;
			}
			
			if(sum%17==0)
			{
				printf("1\n");
			}
			else
			printf("0\n");
		}
		
	}
}


