#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int maxn(int a,int b);
int maxn(int a,int b)
{
	if(a>b)
	return 1;
	else if(a<b)
	return 2;
	else
	{
		printf("Can't Comparable\n");
		return 3;
	}
}
int main()
{
	char a[1000];
	char b[1000]; 
	int i,j,k,m1,m2,len1,len2,f1,f2,sum1,sum2,sum3;
	while(scanf("%s",a)!=EOF)
	{
		scanf("%s",b);
		len1=strlen(a);
		len2=strlen(b);
		if(strcmp(a,b)==0)
		{
			printf("Can't Comparable\n");
			continue;
		}
		if(len1==1&&len2==1)
		{
			if(a[0]>b[0])
			printf("A\n");
			else
			printf("B\n");
		} 
		
		
		else
		{
			k=1;
			sum1=sum2=0;
			for(i=len1-1;i>=0;i--)
			{
				if(a[i]<=57&&a[i]>=48)
				{
					sum1+=((a[i]-48)*k);
					k*=10;
				}
				else
				{
					sum1+=((a[i]-55)*k);
					k*=10;
				}
			}
			k=1;
			for(i=len2-1;i>=0;i--)
			{
				if(b[i]<=57&&b[i]>=48)
				{
					sum2+=((b[i]-48)*k);
					k*=10;
				}
				else
				{
					sum2+=((b[i]-55)*k);
					k*=10;
				}
			}
		//	printf("%d %d\n",sum1,sum2);   OK
			f1=maxn(sum1,sum2); if(f1==3) continue;
			////////////
			m1=a[0];
			for(i=1;i<len1;i++)
			{
				if(m1<a[i])
				m1=a[i];
			}
			m2=b[0];
			for(i=1;i<len2;i++)
			{
				if(m2<b[i])
				m2=b[i];
			}
			if(m1<m2)
			{
				if(m1>=65)
				{
					if(f1==1)
					printf("A\n");
					else
					printf("B\n");
					continue;
				}
				else
				{
					j=m2-48;
					sum3=0;
					k=1;
					for(i=len1-1;i>=0;i--)
					{
							sum3+=((a[i]-48)*k);
							k*=j;	
					}
					f2=maxn(sum1,sum3);
					if(f1==f2)
					{
						if(f1==1)
						printf("A\n");
						else
						printf("B\n");
						continue;
					}
					else
					{
						printf("Can't Comparable\n");
					}
				}
			}
			
		
		
		
		////////////
		else
			{
				if(m1>=65&&m2>=65)
				{
					if(f1==1)
					printf("A\n");
					else
					printf("B\n");
					continue;
				}
				else
				{
					j=m1-48;
					sum3=0;
					k=1;
					for(i=len2-1;i>=0;i--)
					{
							sum3+=((b[i]-48)*k);
							k*=(m1-48);
					}
					f2=maxn(sum3,sum2);
					if(f1==f2)
					{
						if(f1==1)
						printf("A\n");
						else
						printf("B\n");
						continue;
					}
					else
					{
						printf("Can't Comparable\n");
					}
				}
			}
			
		}
	}
}