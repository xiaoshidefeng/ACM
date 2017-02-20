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
	int a,b,i,j,j2,k,n,zu,f;
	int m[100][100];
	scanf("%d",&zu);
	while(zu--)
	{
		memset(m,0,sizeof(m));
		
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&m[i][j]);
			}
		}
		f=0;
		
			for(i=1;i<=n/2;i++)
			{
				
				for(j=1,j2=n;j<=n/2;j++,j2--)
				{
					if(m[i][j]!=m[i][j2])
					{
						f=1;
						break;
					}
					if(m[j][i]!=m[j2][i])
					{
						f=1;
						break;
					}
				}
			}
		
		if(!f)
		printf("yes\n");
		else
		printf("no\n");
	}
}