#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	double c;
	double a[1000];
	int b,zu,zu1;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d",&zu1);
		
		for(b=0;b<zu1;b++)
	{
		scanf("%lf",&a[b]);
	}
	sort(a,a+b);
	printf("%.2lf\n",a[b-1]);
	}
	
}