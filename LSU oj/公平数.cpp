#include<stdio.h>
#include<string.h>
char a[3000];
int main()
{
	int i,j,n,len1,sum;
	while(scanf("%s",a)!=EOF)
	{
		if(a[0]=='0')
		break;
		sum=0;
		len1=strlen(a);
		if(len1%2==0)
		{
			for(i=0;i<len1/2;i++)
		sum+=(a[i]-'0');
		for(;i<len1;i++)
		{
			sum-=(a[i]-'0');
		}
		if(sum==0)
		printf("YES\n");
		else
		printf("NO\n");
		}
		else
		{
			for(i=0;i<len1/2;i++)
		sum+=(a[i]-'0');
		i++;
		for(;i<len1;i++)
		{
			sum-=(a[i]-'0');
		}
		if(sum==0)
		printf("YES\n");
		else
		printf("NO\n");
		}
		
	}
}