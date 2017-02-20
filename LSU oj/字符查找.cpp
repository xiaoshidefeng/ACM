#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[1000];
	int len1,i,sum=0;
	char c;
	gets(a);
	len1=strlen(a);
	scanf("%c",&c);
	for(i=0;i<len1;i++)
	{
		if(a[i]==c)
			sum++;
	} 
	printf("%d\n",sum);
} 