#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int fi[5001][2006];
int main()
{
	int i,j,k,x,len1,len2,c,a;
	memset(fi,0,sizeof(fi));
	fi[0][0]=1;
	fi[1][0]=1;
	fi[2][0]=1;
	fi[3][0]=1; 
	for(i=4;i<5000;i++)//gouzao
	{
		c=0;
		x=0;
		j=0;
		fi[i][j]=(fi[i-1][j]+fi[i-2][j]+fi[i-3][j]+fi[i-4][j])%10;
		c=(fi[i-1][j]+fi[i-2][j]+fi[i-3][j]+fi[i-4][j])/10;
		for(j=1;j<2005;j++)
		{
			fi[i][j]=(fi[i-1][j]+fi[i-2][j]+fi[i-3][j]+fi[i-4][j]+c)%10;
			c=(fi[i-1][j]+fi[i-2][j]+fi[i-3][j]+fi[i-4][j]+c)/10;
			
		}
		if(c!=0)
		fi[i][j]=c;
	}
	while(scanf("%d",&a)!=EOF)
	{
		i=2005;
		while(fi[a-1][i]==0)
		{
			i--;
		}
		for(;i>=0;i--)
		printf("%d",fi[a-1][i]);
		printf("\n");
		
	} 
	
}