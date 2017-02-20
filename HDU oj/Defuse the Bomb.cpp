#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
typedef struct stage
{
	int lable[5];
	int position[5];
	int act;
	int lab_memory=0;
	int pos_memory=0;
}stage;

int main()
{
	int n.i.j,fla;
	stage a[6];
	scanf("%d",&n);
	while(n--)
	{
		for(i=1;i<=5;i++)
		{
			scanf("%d",&a[i].act);
			k=0;
			for(j=1;j<=4;j++)
			{
				scanf("%d",&a[i].lable[j]);
				k++;
				a[i].position[j]=k;
			}
			
		}
		///////////////////input  over 
		//////stage one
		if(a[1].act==1||a[1].act==2)
		{
			printf("2 %d\n",a[1].lable); 
		}
		else if(a[1].act==3)
		{
			printf("3 %d\n",a[1].lable[3]);
		}
		else if(a[1].act==4)
		{
			printf("4 %d\n",a[1].lable);
		} 
		//////one over
		
		/////stage two
		if(a[2].act==1)
		{
			for(i=1;i<4;i++)
			{
				if(a[2].lable[i]==4)
				{
					printf("%d %d\n",a[2].position[i],a[2].lable[2]);
					break;
				}
			}
		} 
		else if(a[2].act==2)
	}		
}