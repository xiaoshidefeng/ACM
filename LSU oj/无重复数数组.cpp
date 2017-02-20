#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[101];
int main()
{
	int i,j,n,m,f,k;
	
		scanf("%d",&n);
		k=0;
		memset(a,0,sizeof(a));
		scanf("%d",&a[0]);
		for(i=1;i<n;i++)
		{
			f=0;
			scanf("%d",&m);
			for(j=0;j<=i;j++)
			{
				if(a[j]==m)
				{
					f=1;
					break;
				}
			}
			if(f==0)
			{
				k++;
				a[k]=m;
				
			}
			
		}
		printf("%d",a[0]);
		for(i=1;i<=k;i++)
		{
			
			printf(" %d",a[i]);
		}
		printf("\n");
	
}