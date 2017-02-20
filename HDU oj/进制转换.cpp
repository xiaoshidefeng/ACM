#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int jinzhi(int a,int b)
{
	int c;
	if(a<b)
	{
		if(a>=10)	printf("%c",a+55);
		else	printf("%d",a);
	}
	else
	{	jinzhi(a/b,b);
		c=a%b;	
		if(c>=10)	printf("%c",55+c);
		else	printf("%d",c);
	}
}
int main()
{
	int q,w;
	while(scanf("%d%d",&q,&w)!=EOF)
	{	if(q>=0)
		{ 
		jinzhi(q,w);
		printf("\n");
		}
		else
		{
			printf("-");
			jinzhi(-q,w);
			printf("\n");
		} 
	}
}