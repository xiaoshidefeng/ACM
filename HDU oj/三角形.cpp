#include <stdio.h>
#include<stdlib.h>
#include<math.h> 
#include<algorithm>
using namespace std;
#define maxn 10000
double a[maxn];

int main()
{
	int n,i;
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<3;i++)
		{
			scanf("%lf",&a[i]);			
		}
		sort(a,a+3);
		if((a[2]-a[0]<a[1])&&a[0]!=0&&a[1]!=0&&a[2]!=0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}