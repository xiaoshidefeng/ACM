#include <stdio.h>
#define maxn 300
int main()
{
	long int n,t;
	int a[maxn];
	for(int i=0;i<256;i++)
	{
		if((i*2)>255)
		a[i]=(i*2-256)^i;
		else
		a[i]=(i*2)^i;
	}
	scanf("%ld",&n);
	for(int j=0;j<n;j++)
	{
		scanf("%ld",&t);
		for(int i=0;i<256;i++){
			if (t==a[i]&&j<n-1) printf("%d ",i);
		if(t==a[i]&&j==n-1)  printf("%d\n",i);
		}
		
			}
			
}
