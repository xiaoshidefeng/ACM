#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
char a[200][200];
 
int main()
{
	int zu,i,j,man,h,l;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d",&h,&l);
		memset(a,0,sizeof(a));
		for(i=1;i<=h;i++)
		{
			scanf("%s",a[i]+1);
		}
		man=0;
		for(i=1;i<=h;i++)
		{
			for(j=1;j<=l;j++)
			{
				if(a[i][j]=='O')
				{
					if(a[i+1][j]=='|')
					a[i+1][j]='.';
					if(a[i+1][j-1]=='/')
					a[i+1][j-1]='.';
					if(a[i+1][j+1]==92)
					a[i+1][j+1]='.';
					
					if(a[i+2][j-1]=='(')
					a[i+2][j-1]='.';
					if(a[i+2][j+1]==')')
					a[i+2][j+1]='.';
					man++;
				}
				else if(a[i][j]==')')
				{
					if(a[i-2][j+1]=='O')
					a[i-2][j+1]='.';
					if(a[i-1][j]=='/')
					a[i-1][j]='.';
					if(a[i-1][j+1]=='|')
					a[i-1][j+1]='.';
					if(a[i-1][j+2]==92)
					a[i-1][j+2]='.'; 
					
					if(a[i][j-2]=='(')
					a[i][j-2]='.';
					man++;
				} 
				else if(a[i][j]=='(')
				{	
					if(a[i-2][j-1]=='O')
					a[i-2][j-1]='.';
					if(a[i-1][j]==92)
					a[i-1][j]='.';
					if(a[i-1][j-1]=='|')
					a[i-1][j-1]='.';
					if(a[i-1][j-2]=='/')
					a[i-1][j-2]='.';
					
					if(a[i][j+2]==')')
					a[i][j+2]='.';
					man++;
				}
				else if(a[i][j]=='|')
				{
					if(a[i+1][j-1]=='(')
					a[i+1][j-1]='.';
					if(a[i+1][j+1]==')')
					a[i+1][j+1]='.';
				
					if(a[i-1][j]=='O')
					a[i-1][j]='.';
					if(a[i][j-1]=='/')
					a[i][j-1]='.';
					if(a[i][j+1]==92)
					a[i][j+1]='.';
					man++;
				}
				else if(a[i][j]=='/')
				{
					
					if(a[i+1][j]=='(')
					a[i+1][j]='.';
					if(a[i+1][j+2]==')')
					a[i+1][j+2]='.';
					
					if(a[i][j+1]=='|')
					a[i][j+1]='.';
					if(a[i][j+2]==92)
					a[i][j+2]='.';
					if(a[i-1][j+1]=='O')
					a[i-1][j+1]='.';
					man++;
				}
				else if(a[i][j]==92)
				{
					
					if(a[i+1][j]==')')
					a[i+1][j]='.';
					if(a[i+1][j-2]=='(')
					a[i+1][j-2]='.';
					
					if(a[i-1][j-1]=='O')
					a[i-1][j-1]='.';
					if(a[i][j-1]=='|')
					a[i][j-1]='.';
					if(a[i][j-2]=='/')
					a[i][j-2]='.';
					man++;
				}
			}
		}
		printf("%d\n",man);
	}	
	}