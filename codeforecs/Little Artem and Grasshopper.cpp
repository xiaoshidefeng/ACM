#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char map[100001];
__int64 dis[100001];
int main()
{
	__int64 i,j,jump,n,position,f;
	while(scanf("%I64d",&n)!=EOF)
	{
		memset(dis,0,sizeof(dis));
		memset(map,0,sizeof(map));
		getchar();
		for(i=1;i<=n;i++)
		{
			scanf("%c",&map[i]);
		}
		position=1;
		for(i=1;i<=n;i++)
		{
			scanf("%I64d",&dis[i]);
		}
		f=0;
		for(i=1;i<=n;i++)
		{
			if(map[position]=='>')
			{
				position=position+dis[position];
				if(position>n||position<1)
				{
					printf("FINITE\n");
					f=1;
					break;
				}
			}
			else if(map[position]=='<')
			{
			
				position=position-dis[position];
				if(position>n||position<1)
				{
					printf("FINITE\n");
					f=1;
					break;
				}
			}
		}
		if(f==0)
			printf("INFINITE\n");	
	}
}	
