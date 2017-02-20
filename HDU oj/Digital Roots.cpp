#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	__int64 num,len,i,sum;
	char a[1500];
	int b[1500];
	while(scanf("%s",&a)!=EOF) 
	{
		memset(b,0,sizeof(b));
		if(a[0]=='0')
		break;
		
		len=strlen(a);
		i=len;
		sum=0;
		while(i--)
		{
			sum=sum+(a[i]-'0');
		}
		
		//printf("%d\n",sum);
		//while(num!=0)
			//{
			//	sum=sum+num%10;
		//		num/=10;
		//	}
			//printf("%d\n",sum);
		while(sum>=10)
		{
			num=sum;
			sum=0;
			while(num!=0)
			{
				sum=sum+num%10;
				num/=10;
			}
		}
		printf("%I64d\n",sum);
	}
}