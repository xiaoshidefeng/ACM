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
	int i,j,k,n,maxx;
	char c[666];
	scanf("%s",c);
	n=strlen(c);
	maxx='a';
	if(c[0]!='a')
	{
		printf("NO\n");
		return 0;
	}
	for(i=1;i<n;i++)
	{
		if(c[i]-maxx==1)
		{
			maxx=maxx+1;
		}else if(c[i]-maxx>1){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
}