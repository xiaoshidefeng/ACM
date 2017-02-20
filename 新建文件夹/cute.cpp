#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	double res;
	double i,j,k,a;
	while(scanf("%lf",&a)!=EOF)
	{
		res=0;
		for(;a>1;a--)
		{
			res=(1/(a*a))+res;
		}
		res++;
		printf("%.5lf\n",res);
	} 
}