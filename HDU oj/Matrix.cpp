#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[1001][1001]; 
int main()
{
	int num,i,j,x,y,n,m,zu,q,v;	
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d%d",&n,&m,&q);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		while(q--)
		{
			scanf("%d%d%d",&num,&x,&y);
			if(num==1)
			{
				for(j=1;j<=m;j++)
				{
					v=a[x][j];
					a[x][j]=a[y][j];
					a[y][j]=v;
				}
			}
			else if(num==2)
			{
				for(i=1;i<=n;i++)
				{
					v=a[i][x];
					a[i][x]=a[i][y];
					a[i][y]=v;
				}
			}
			else if(num==3)
			{
				for(j=1;j<=m;j++)
				{
					a[x][j]+=y;
				}
			}
			
			else if(num==4)
			{
				for(i=1;i<=n;i++)
				{
					a[i][x]+=y;
				} 
			}
			}
			for(i=1;i<=n;i++)
			{
				for(j=1;j<m;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("%d\n",a[i][j]);
		}
		
	}
}