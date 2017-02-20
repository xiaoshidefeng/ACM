#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	char a[5];
	gets(a);
	printf("%c",a[0]);	
	for(int i=1;i<4;i++)
	{
		printf(" %c",a[i]);	
	}	
	printf("\n");
}