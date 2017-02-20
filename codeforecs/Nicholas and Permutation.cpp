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
__int64 a[101]; 
int main()
{
	__int64 i,j,k,ma,mi;
	while(scanf("%I64d",&k)!=EOF)
	{
		scanf("%I64d",&a[1]);
		mi=ma=1;
		for(i=2;i<=k;i++)
		{
			scanf("%I64d",&a[i]);
			if(a[mi]>a[i])
			mi=a[i];
			else if(a[ma]<a[i])
			ma=a[i];
		} 
		
	}
} 