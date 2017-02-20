#include <stdio.h>
#include<stdlib.h>
#include<math.h> 
#include<algorithm>
using namespace std;
#define maxn 10000
__int64 a[maxn];

int main()
{
	int n,i;
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<4;i++)
		{
			scanf("%I64d",&a[i]);			
		}
		sort(a,a+4);
		if(a[3]-a[1]-a[0]<a[2]&&a[0]!=0&&a[1]!=0&&a[2]!=0&&a[3]!=0)
			printf("Yes\n");
		else
			printf("No\n");
	}
}