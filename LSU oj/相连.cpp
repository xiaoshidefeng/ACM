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
	int zu,i,j,k,n,n2,now,f;
	int a[100001];
	scanf("%d",&zu);
	while(zu--)
	{
		memset(a,0,sizeof(a));
		scanf("%d%d",&n,&k);
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		n2=2*n;
		for(;i<n2;i++)
		{
			a[i]=a[i-n];
		}
		f=0;
		now=0;
		for(i=0;i<n2;i++)
		{
			now=0;
			for(j=i;now<k;j++)
			{
				now = now +a[j];
				if(now==k&&j-i<n)
				{
					f=1;
					break;
				}
			}
			if(f)
			{
				printf("YES\n");
				break;
			}
		}
		if(!f)
		printf("NO\n");
	} 
}