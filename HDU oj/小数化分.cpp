#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <limits.h>

#define maxn 100

int bu[maxn];
int xun[maxn];
char b[maxn];
int main()
{
	int a,zu,len1,len2;
	char x; 
	scanf("%d",&zu);
	
	while(zu--)
	{	
		scanf("%s",b);
		//len1=strlen(b);
		for(len1=0;b[len1]!='(';)		
		{
			len1++			
		} 
		//Ñ­»·Ð¡Êý
		if(len1-1==0)
		{
			len2=0;
			for(len1=2;b[len2]!=')';)
			{
				len2++;
			}
			
			
		} 
	}
	
}