#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int i=0,j=0,r,a,b,c,len1;
	char ch[5];
	char x[5];
	while(scanf("%d%c%d%c%s",&a,&ch[0],&b,&ch[2],x)!=EOF)
	{
		if(strcmp(x,"?")==0)
		{
			continue;
		}
		if(ch[0]==43)
		{
			r=a+b;
		}
		else
		{
			r=a-b;
		}
			len1=strlen(x);
			if(len1==1)
			{
				c=x[0]-'0';
				if(c==r)
				i++;
			}
			else if(len1==2)
			{
				c=(x[0]-'0')*10+(x[1]-'0');
				if(c==r)
				i++;
			}
			else if(len1==3)
			{
				c=(x[0]-'0')*100+(x[1]-'0')*10+(x[2]-'0');
				if(c==r)
				i++;
			}		
	}
	printf("%d\n",i);
}