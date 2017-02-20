#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[100001];
int main()
{
	int i=0,j,k,c=0,zu,f=0;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d",&k);
		while(k--)
		{
			scanf("%d",&a[c]);
			c++;
		}
	}
	scanf("%d",&j);
	for(i=0;i<c;i++)
	{
	if(a[i]==j)
	{
		printf("YES\n");
		f=1;
		break;
	}
	}
	if(f==0)
	printf("NO\n");
}