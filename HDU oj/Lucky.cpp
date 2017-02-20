#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
__int64 a[10000];
int main()
{
	__int64 zu,n,i,j,flags=0;
	scanf("%I64d",&zu);
	while(zu--)
	{
		flags=0;
		scanf("%I64d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%I64d",&a[i]);
			if(a[i]==1)
			flags=1;
			//else if(a[i]==2)
			//flags=2;
		}
		if(flags==1)
		{
			for(i=0;i<n;i++)
			{
				if(a[i]==0)
				flags=0;
			}
			if(flags==0){
				printf("YES\n");
				continue;
			}
			else
			{
				printf("NO\n");
			}
			
		}
		else
		printf("NO\n");
		
	}
}