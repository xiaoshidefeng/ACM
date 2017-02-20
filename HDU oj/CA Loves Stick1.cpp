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
	double b[4];
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<4;i++)
		{
			scanf("%I64d",&a[i]);			
		}
		sort(a,a+4);
		sort(b,b+4);
		printf("%I64d\n%I64d\n%I64d\n%I64d\n",a[0],a[1],a[2],a[3]);
		if(a[0]>1&&a[1]>1&&a[2]>1&&a[3]>1){
			if(log10((double)(a[0]))+log10((double)(a[1]))+log10((double)(a[2]))>log10((double)(a[3]))) 
				printf("Yes\n");
		else printf("No\n");
		}
		else if(a[0]==0||a[1]==0||a[2]==0||a[3]==0)
			printf("NO\n");
		else {
			if(a[0]+a[1]+a[2]>a[3]) printf("Yes\n");
		else printf("No\n");
		}		
			//printf("%I64d\n%I64d\n",a[0],a[0]+a[1]+a[2]);
	}
	return 0;
}
