#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int zu,jiao,ji,tu,minn,maxn;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d",&jiao);
		if(jiao%2!=0)
		{
			printf("0 0\n");
			continue;
		}
		else
		{
			if(jiao%4==0)
			{
				minn=jiao/4;
				maxn=jiao/2;
			
			}
			else
			{
				minn=jiao/4+1;
				maxn=jiao/2;
				
			}
			printf("%d %d\n",maxn,minn);
		}
	}
} 