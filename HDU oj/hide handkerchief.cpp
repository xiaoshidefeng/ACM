#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
	__int64 a,b,t;
	while(scanf("%I64d%I64d",&a,&b)!=EOF)
	{
		if(a==b&&a==-1)
		break;
	//	b--;
		if(a<b)
		{
			t=b;
			b=a;
			a=t;
		}
		while(a%b!=0)
		{
			t=a%b;
			a=b;
			b=t;
			
		}
		if(b==1)
		printf("YES\n");
		else
		printf("POOR Haha\n");
	}
} 