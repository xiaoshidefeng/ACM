#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c,i,j;
	scanf("%d%d",&a,&b);
	j=a*b;
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	} 
	printf("%d %d\n",b,j/b);
}