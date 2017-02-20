#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int sum,i,j,a,b;
	int c[11]={1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};
	scanf("%d%d",&a,&b);
	sum=0;
	for(i=0;i<b;i++)
	{
		sum=sum+c[i]*a;
	}	
	printf("%d\n",sum);
}