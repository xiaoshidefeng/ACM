#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[2001];
int main()
{
	int i,j,n,q,w;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&q,&w);
		j=0;
		while(q--)
		{
			scanf("%d",&i);
			j+=i;
		}
		if(j>w)
		printf("Warning\n");
		else
		printf("Safe\n");
	}
}