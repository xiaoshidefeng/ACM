#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[100001];
int b[100001]; 
int main()
{
	int i,j=0,n,k;
	for(i=1;i<=100000;i++)
	{
		j=j+i;
		a[i]=j;
	}
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
		
		i=1;
		while(k-a[i]>0)
		{
			i++;
		}
		i--;
		printf("%d\n",b[k-a[i]]);
	}
}