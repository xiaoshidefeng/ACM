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
int a[10000000];
int b[10000000];
char c[10000000]; 
int  x[10000000];

bool cmp(const int &a,const int &b)
{
	return a>b;
}

int main()
{
	int i,j,k,len1,f,q,jinwei;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%s",c);
		len1=strlen(c);
		if(len1==1)
		{
			printf("Uncertain\n");
			continue;
		}
		
		
		sort(c,c+len1,cmp);
		if(len1>=2)
		{
			if(c[1]=='0')
			{
				printf("Uncertain\n");
				continue;
			}
		}
		q=0;
		for(i=1;i<len1;i++)
		{
			if(c[i]=='0')
			{
				j=i;
				q=1;
				break;
			}
			a[i]=c[i]-'0';
		}
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		jinwei=0;
		if(q==1)
		{
			if(len1-j-1>j-1)
			{
				len1=len1-j-1;
				a[j-1]++;
			}
			else
			{
				len1=j-1;
				for(i=0;i<j-1;i++)
				{
					a[i]=c[i]-'0';
				}
				for(i=j-1;i<len1;i++)
				{
					b[i]=c[i]-'0';
				}
				for(i=0;i<len1;i++)
				{
					a[i]=a[i]+b[i];
				}
			}
			
			f=0;
			while(f==0)
			{
				f=1;
				for(i=len1-1;i>=0;i--)
				{
					if(a[i]>10)
					{
						f=0;
						if(i>0)
						a[i-1]++;
						else
						{
							jinwei++;
						}
					}
				}
			}
			if(jinwei==0)
			{
				for(i=0;i<j||i<len1-j;i++)
				{
					printf("%d",a[i]);
				}
				printf("\n");
			}
			else
			{
				printf("%d",jinwei);
				for(i=0;i<len1;i++)
				{
					printf("%d",a[i]);
				}
				printf("\n");
			}
			
		}
		else
		{
			len1--;
			for(i=0;i<=len1;i++)
			{
				a[i]=c[i]-'0';
			}
			a[len1-1]=a[len1]+a[len1-1];
			f=0;
			while(f==0)
			{
				f=1;
				for(i=len1-1;i>=0;i--)
				{
					if(a[i]>10)
					{
						f=0;
						if(i>0)
						a[i-1]++;
						else
						{
							jinwei++;
						}
					}
				}
			}
			if(jinwei==0)
			{
				for(i=0;i<len1;i++)
				{
					printf("%d",a[i]);
				}
				printf("\n");
			}
			else
			{
				printf("%d",jinwei);
				for(i=0;i<len1;i++)
				{
					printf("%d",a[i]);
				}
				printf("\n");
			}
		}
		
	}
}