#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int a,i,j,n;
	while(scanf("%d",&n)!=EOF)
	{
		i=n/7;
		j=n%7;
		if(j==0)
		{
			printf("%d %d\n",i*2,i*2);
		}
		else if(j==1)
		printf("%d %d\n",i*2,i*2+1); 
		else if(j>=2&&j<=5)
		printf("%d %d\n",i*2,i*2+2);
		else if(j==6)
		printf("%d %d\n",i*2+1,i*2+2);
	}	
} 