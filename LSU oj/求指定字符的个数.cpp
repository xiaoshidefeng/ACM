#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char a[1000];

int main()
{
	char c;
	int len1,i,j=0;
	gets(a);
	len1=strlen(a);
	scanf("%c",&c);
	for(i=0;i<len1;i++)
	{
		if(c==a[i])
		j++;
	} 
	printf("%d\n",j);
}