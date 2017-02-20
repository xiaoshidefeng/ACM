#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	__int64 T,P,q;
	scanf("%I64d",&T);
	while(T--)
	{
		scanf("%I64d%I64d",&q,&P);
		printf("%I64d\n",((((q+1)*(q+1)-5*q+1)/2)%P));
	}
}