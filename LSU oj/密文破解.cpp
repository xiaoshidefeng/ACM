#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[300];
char c[300];
int main()
{
	int len1,i,j,q,w,m,k,maxn;
	
	char ch;
	while(gets(c)!=NULL)
	{
		memset(a,0,sizeof(a));
		len1=strlen(c);
		for(i=0;i<len1;i++)
		a[c[i]]++;
		
		maxn=0;
		for(i=0;i<125;i++)
		if(a[i]>maxn)
		maxn=a[i];
		
		for(i=0;i<125;i++)
		if(maxn==a[i])
		{
			printf("%c\n",i);
			break;
		}
		
	}
}