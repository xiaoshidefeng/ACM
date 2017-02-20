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

int a[23][1003];

int maxthree(int a,int b,int c)
{
	int maxs = -99999999;
	if(a>maxs)
	{
		maxs = a;
	}
	if(b>maxs)
	{
		maxs = b;
	}
	if(c>maxs)
	{
		maxs = c;
	}
	return maxs;
}

int main()
{
	int zu,n,i,j,k,r,c,maxk;
	scanf("%d",&zu);
	while(zu--)
	{
		memset(a,-9999999,sizeof(a));
		
		scanf("%d%d",&r,&c); //r–– c¡–
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		} 
		a[1][0]=0;
		a[0][1]=0;
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
				maxk=-9999999;
				for(k=2;k<=c;k++)
				{
					if(j%k==0&&a[i][j/k]>maxk)
					{
						maxk = a[i][j/k];
					}
				}
				
				a[i][j] = a[i][j] + maxthree(a[i-1][j],a[i][j-1],maxk);
			}
		}
		printf("%d\n",a[r][c]);
	} 
	
	
}