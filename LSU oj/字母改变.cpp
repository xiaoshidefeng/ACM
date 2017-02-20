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
	for(i=0;i<len1;i++)
	{
		if(a[i]>=65&&a[i]<=89)
		printf("%c",a[i]+1);
		else if(a[i]>=97&&a[i]<=121)
		printf("%c",a[i]+1);
		else if(a[i]==90||a[i]==122)
		printf("%c",a[i]-25);
		else
		printf("%c",a[i]);
	}
	printf("\n");
	
	
} 