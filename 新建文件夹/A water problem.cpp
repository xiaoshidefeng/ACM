#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
char s[10000000];
int main()
{
	int a,b,i;
	int cnt=0;
	while(scanf("%s",s)!=EOF)
	{
		a=0,b=0;
		int len=strlen(s);
		for (i=0; i<len; ++i)
		{
			a=a*10+(s[i]-'0');
			a%=137;
		}
		for (i=0; i<len; ++i)
		{
			b=b*10+(s[i]-'0');
			b%=73;
		}
		printf("Case #%d: %s\n",++cnt,!a&!b?"YES":"NO");
	}
	return 0;
}
