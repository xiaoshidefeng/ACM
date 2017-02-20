#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char s[200001]; 
int main()
{
	int len1,i,j;
	while(gets(s)!=NULL)
	{
		len1=strlen(s);
		for(i=1;i<len1-1;i++)
		{
			for(s[i]='a';s[i]==s[i-1]||s[i+1]==s[i];)
		{
			s[i]++;
		}
		}
		puts(s);
	}
}
