#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	__int64 n,a,b,i,j,num;
	scanf("%I64d",&n);
	while(n--)
	{
		scanf("%I64d",&num);
		if((num%2==1&&num!=1)||(num%4==0&&num!=4))
		printf("True\n");
		else
		printf("False\n");		
	}	
}