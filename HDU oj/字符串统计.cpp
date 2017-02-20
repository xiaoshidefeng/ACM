#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[10000];
int main()
{
	int zu,sum=0;
	char ch;
	scanf("%d",&zu);	getchar();
	while(zu--)
	{
		sum=0;	
		while((ch=getchar())!=EOF)
		{
			if(ch=='\n')
				break;
		 	if(ch<=57&&ch>=48)
		 		sum++;
		}
		printf("%d\n",sum);
	}
} 