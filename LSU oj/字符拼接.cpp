#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int len1,i;
	char a[1000];
	char b[1000];
	gets(a);
	len1=strlen(a);
	printf("%s",a);
	for(i=len1-1;i>=0;i--)
	printf("%c",a[i]);
	printf("\n");
} 