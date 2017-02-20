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
int main()
{
	char a[100];
	char b[100];	
	scanf("%s",a);
	
	int i=0,j,k,n,x,q,f;
	
	k=strlen(a);
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		gets(b);
		//printf("%s\n",b);
		j=strlen(b);
		if(j<k)
			continue;
		
		for(x=0;x<j;x++)
		{
			if(b[x]==a[0])
			{
				q=x+k;
				f=0;
				//printf("%s\n",b);
				for(int y=x+1,w=1;y<q;y++,w++)
				{
					if(b[y]!=a[w])
					{
						f=1;
						break;
					}
					
				}
				if(f==0)
				{
					i=i+1;
				}
			}
		}
		
	}
	printf("%d\n",i);
	
}