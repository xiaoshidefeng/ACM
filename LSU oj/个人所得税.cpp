#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	double a,b,c,ret;
	int i,j,k;
	while(scanf("%lf",&a)!=EOF)
	{
		if(a<=1000)
		{
			printf("0\n");
			continue;
		}
		else if(a<=1500)
		{
			b=(a-1000)*0.05;
			printf("%.2lf\n",b);
			continue;
		}
		else if(a<=3000)
		{
			b=(a-1000)*0.1;printf("%.2lf\n",b);
			continue;
		}
		else if(a<=6000)
		{
			b=0.15*(a-1000);printf("%.2lf\n",b);
			continue;
		}
		else if(a<=21000)
		{
			b=0.2*(a-1000);printf("%.2lf\n",b);
			continue;
		}
		else
		{
			b=0.25*(a-1000);printf("%.2lf\n",b);
			continue;
		}
		
	}
}