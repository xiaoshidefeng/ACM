#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	__int64 a,b;
	while(scanf("%I64d",&a)!=EOF)
	{
		if(a%3==0)
		printf("%I64d\n",2*a/3);
		else if(a%3==1||a%3==2)
		printf("%I64d\n",(a/3)*2+1);
		
	} 
}