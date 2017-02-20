#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	double a,b,c,m;
	int i,j;
	scanf("%d",&i);
	
	scanf("%lf%lf",&a,&b);
		c=a*a+b*b;
		i--;
	while(i--)
	{
		scanf("%lf%lf",&a,&b);
		b=a*a+b*b;
		if(b>c)
		c=b;
	}
	printf("%.2lf\n",sqrt(c));
}