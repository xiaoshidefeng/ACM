#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	__int64 a=1,i,j,y=0,flags=1,shi,ge,len;
	int b[10000];
	char x[10000];
	char c,t;
	while(scanf("%s",x)!=EOF)
	{
		a=1;
		len=strlen(x);
		//printf("%I64d\n",len);
		if(len>2)
			printf("0\n");
	/*while((x[y]=getchar())!=EOF)
	{
		if(x[y]=='\n')
			break;
		//j=c-'0';
		//b[y]=j;
		y++;
		if(y>2)
			flags=0;
		
	}*/ 
		
	else
	{	
		if(len==2)
		{
			ge=x[1]-'0';
		shi=x[0]-'0';
		shi=shi*10;
		i=shi+ge;
		}
		else
		i=x[0]-'0';
		
		//printf("%I64d\n",i);
		for(j=1;j<=i;j++)
		{
		a*=j;
		a=a%2009;
		//printf("%I64d           %I64d\n",a%2009,i);
		}
		printf("%I64d\n",a); 
	}
	}
	


} 