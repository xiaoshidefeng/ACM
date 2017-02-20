#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	int num,len,i,sum;
	char a[1500];
	int b[1500];
	scanf("%s",&a); 	
	
		memset(b,0,sizeof(b));
		
		
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
			printf("%d\n",sum);
	
}