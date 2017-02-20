#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int fi[222][1000];
int main()
{
	int i,j,k,x,len1,len2,c,a;
	memset(fi,0,sizeof(fi));
	fi[0][0]=1;
	fi[1][0]=2;
	for(i=2;i<211;i++)//gouzao
	{
		c=0;
		x=0;
		j=0;
		fi[i][j]=(fi[i-1][j]+fi[i-2][j])%10;
		c=(fi[i-1][j]+fi[i-2][j])/10;
		for(j=1;j<200;)
		{
			fi[i][j]=(fi[i-1][j]+fi[i-2][j])%10+c;
			c=(fi[i-1][j]+fi[i-2][j])/10;
			j++;
		}
		if(c!=0)
		fi[i][j]=c;
	}
	while(scanf("%d",&a)!=EOF)
	{
		i=100;
		while(fi[a-1][i]==0)
		{
			i--;
		}
		for(;i>=0;i--)
		printf("%d",fi[a-1][i]);
		printf("\n");
		
	} 
	
}