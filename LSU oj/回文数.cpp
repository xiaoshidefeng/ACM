#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char a[1000];
int main()
{
	int i,j,len1,n,f=0;
	gets(a);
	len1=strlen(a);
	
//	if(len1%2==1)		//jishu
//	{
		for(i=0,j=len1-1;i<len1/2;i++,j--)
		{
			if(a[i]!=a[j])
			{
				printf("0\n");
				return 0;
			}
		}
//	}
	printf("1\n");

}