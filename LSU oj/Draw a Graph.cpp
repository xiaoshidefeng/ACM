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
	int l[6];
	int a,b,c,d,e,f,i,j,k;
	
	while(scanf("%d%d%d%d%d%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5])!=EOF)
	{
		printf("A");		//h1
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==10)
			printf(" 10 ");
			else printf("   ");
		}
		printf("    \n");////over 1
		
		//h2
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==9)
			{
				printf(" 9 ");
			}
			else if(l[i]>9)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 2
		
		//h3
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==8)
			{
				printf(" 8 ");
			}
			else if(l[i]>8)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 3
		//h4
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==7)
			{
				printf(" 7 ");
			}
			else if(l[i]>7)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 4
		
		//h5
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==6)
			{
				printf(" 6 ");
			}
			else if(l[i]>6)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 5
		
		
		//h6
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==5)
			{
				printf(" 5 ");
			}
			else if(l[i]>5)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 6
		
		//h7
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==4)
			{
				printf(" 4 ");
			}
			else if(l[i]>4)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 7
		
		//h8
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==3)
			{
				printf(" 3 ");
			}
			else if(l[i]>3)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 8
		
		//h9
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==2)
			{
				printf(" 2 ");
			}
			else if(l[i]>2)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 9
		
		//h10
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==1)
			{
				printf(" 1 ");
			}
			else if(l[i]>1)
			printf("***");
			else printf("   ");
		}
		printf("    \n");////over 10
		
		//h11
		printf("|");
		for(i=0;i<6;i++)
		{
			printf("  ");
			if(l[i]==0)
			{
				printf(" 0 ");
			}
			else if(l[i]>0)
			printf("***");
			//else printf("   ");
		}
		printf("    \n");////over 11
		
		//h12
		printf("|");
		printf("--------------------------------->\n");
		
	}
}