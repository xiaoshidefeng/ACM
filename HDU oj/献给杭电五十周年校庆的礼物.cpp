#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{

	__int64 i,j,n;
	while(scanf("%I64d",&n)!=EOF)
	{
		printf("%I64d\n",(n*n*n+5*n+6)/6);
	}	
}