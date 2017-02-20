#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char s[20];
int main()
{
	int a,b,i,j,num,zu,len1,k,x;
	scanf("%I64d",&zu);
	while(zu--)
	{
		scanf("%s",s);
		len1=strlen(s);
		loop:len1=strlen(s);
		if(s[0]>'7')
		{
			len1++;
			len1++;
			for(i=0;i<len1;i++)
			s[i]='1';
		}
		if(s[0]-'0'<=3)
		{
			s[0]='4';
			for(i=1;i<(len1/2);)
			{
				s[i]='4';
				i++;
			}
			for(;i<len1;i++)
			{
				s[i]='7';
			}
		}
		else if(s[0]-'0'>4&&s[0]<=7)
		{
			s[0]='7';
			for(i=1;i<=len1/2;)
			{
				s[i]='4';
				i++;
			}
			for(;i<len1;i++)
			{
				s[i]='7';
			}
		}
		else if(s[0]=='4')
		{
			
			j=0;
			i=1;
			if(s[i]>'7')
			{
				s[0]='6';
				goto loop;
			}
			for(i=1;i<(len1/2);i++)
			{
				
				if(s[i]<'4')
				{
					s[i]='4';
					i++;
					for(;i<(len1/2);)
					{
						s[i]='4';
						i++;
					}
					while(j--)
					{
						s[i]='4';
						i++;
					}
					for(;i<len1;i++)
					s[i]='7';
					break;
				}
				else if(s[i]<'7'&&s[i]>'4')
				{
					s[i]='7';
					i++;
					j++;
					for(;i<(len1/2);)
					{	j++;
						s[i]='4';
						i++;
					}
					while(j--)
					{
						s[i]='4';
						i++;
					}
					for(;i<len1;i++)
					s[i]='7';
					break;
				}
				else if(s[i]>'7')
				{
					for(;s[i-1]>7&&i>1;i--)
					{
						continue;
					}
					
					if(s[i-1]==4)
					{
						s[i-1]='6';
						i--;
						continue;
					}
					
					
				}
			}
		}
		printf("%s\n",s);
		
	} 
		
}