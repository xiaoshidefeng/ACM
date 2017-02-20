#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
char ch[10011][1001];
int main()
{
	int i=0,flags,j=0;
	while(scanf("%s",ch[0])!=EOF)
	{
	i=0;
	memset(ch,0,sizeof(ch));
	if(strcmp(ch[0],"#")==0)
	{	printf("%d\n",i);
		continue;	
	}	
		i++;
		while(scanf("%s",ch[i])!=EOF)
	{
		if(strcmp(ch[i],"#")==0)
		break;
		else
		{		
			flags=0;
			for(int y=0;y<i;y++)
				{
				if(strcmp(ch[i],ch[y])==0)
				{
					flags=1;
					break;
				}
				}			
			if(flags==0)
			{
				i++;
			}		
		}		
	}	
	printf("%d\n",i);
	}
} 