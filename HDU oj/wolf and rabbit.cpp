#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
	int zu;
	int a,b,c;
	scanf("%d\n",&zu);
	while(zu--)
	{
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			c=a;
			a=b;
			b=c;
		} 
		while((b%a)!=0)
		{
			c=b%a;
			b=a;
			a=c;
		}
		if(a==1)
		printf("NO\n");
		else
		printf("YES\n");
	}
} 