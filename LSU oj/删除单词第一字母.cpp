#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char a[5000];
int main()
{
	int len1,i,j;
	gets(a);
	len1=strlen(a);
	for(i=1;i<len1;i++)
	{
		if(a[i]==' ')
		{
			
		printf(" ");
		i=i+2;
	
		}
		printf("%c",a[i]);
	}
	printf("\n");
}