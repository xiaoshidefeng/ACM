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
	char c[1000];
	int n,i,j,k,len1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",c);
		len1=strlen(c);
		printf("String #%d\n",i);
		for(j=0;j<len1;j++)
		{
			if(c[j]!=90)
			{
				printf("%c",c[j]+1);
			}else{
				printf("A");
			}
		}
		printf("\n\n");
	} 
}