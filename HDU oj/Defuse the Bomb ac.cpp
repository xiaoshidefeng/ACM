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
	int labmem;
	int posmem;
}stage;

int main()
{
	int n,i,j,fla,k;
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
			printf("2 %d\n",a[1].lable[2]);
            a[1].labmem=a[1].lable[2];
            a[1].posmem=2;
		}
		else if(a[1].act==3)
		{
			printf("3 %d\n",a[1].lable[3]);
			a[1].labmem=a[1].lable[3];
			a[1].posmem=3;
		}
		else if(a[1].act==4)
		{
			printf("4 %d\n",a[1].lable[4]);
			a[1].labmem=a[1].lable[4];
			a[1].posmem=4;
		} 
		//////one over
		
		/////stage two
		if(a[2].act==1)
		{
			for(i=1;i<=4;i++)
			{
				if(a[2].lable[i]==4)
				{
					printf("%d %d\n",a[2].position[i],a[2].lable[i]);
					a[2].labmem=a[2].lable[i];
					a[2].posmem=a[2].position[i];
					break;
				}
			}
		} 
		else if(a[2].act==2||a[2].act==4)
		{
		  printf("%d %d\n",a[2].position[a[1].posmem],a[2].lable[a[1].posmem]);  //If the display is 2, press the button in the same position as you pressed in stage 1.
          a[2].labmem=a[2].lable[a[1].posmem];
          a[2].posmem=a[2].position[a[1].posmem];
        }
        else if(a[2].act==3)
        {
            printf("%d %d\n",a[2].position[1],a[2].lable[1]);
            a[2].labmem=a[2].lable[1];
            a[2].posmem=a[2].position[1];
        }
        ////////two over

        ///////stage three
        if(a[3].act==1)
        {
            for(i=1;i<=4;i++)
            {
                if(a[3].lable[i]==a[2].labmem)
                {
                    printf("%d %d\n",a[3].position[i],a[3].lable[i]);
                    a[3].labmem=a[3].lable[i];
                    a[3].posmem=a[3].position[i];
                    break;
                }
            }     //If the display is 1, press the button with the same label you pressed in stage 2

        }
        else if(a[3].act==2)
        {
            for(i=1;i<=4;i++)
            {
                if(a[3].lable[i]==a[1].labmem)
                {
                    printf("%d %d\n",a[3].position[i],a[3].lable[i]);
                    a[3].labmem=a[3].lable[i];
                    a[3].posmem=a[3].position[i];
                    break;
                }
            }
        }
        else if(a[3].act==3)
        {
            printf("3 %d\n",a[3].lable[3]);
            a[3].labmem=a[3].lable[3];
            a[3].posmem=3;
        }
        else if(a[3].act==4)
        {
            for(i=1;i<=4;i++)
            {
                if(a[3].lable[i]==4)
                {
                    printf("%d 4\n",a[3].position[i]);
                    a[3].labmem=4;
                    a[3].posmem=a[3].position[i];
                    break;
                }
            }
        }
        ///////three over
        
        //////stage four
        if(a[4].act==1)
        {
            printf("%d %d\n",a[4].position[a[1].posmem],a[4].lable[a[1].posmem]);
            a[4].labmem=a[4].lable[a[1].posmem];
            a[4].posmem=a[4].position[a[1].posmem];
        }
        else if(a[4].act==2)
        {
            printf("1 %d\n",a[4].lable[1]);
            a[4].labmem=a[4].lable[1];
            a[4].posmem=1;
        }
        else if(a[4].act==3||a[4].act==4)
        {
            printf("%d %d\n",a[4].position[a[2].posmem],a[4].lable[a[2].posmem]);
            a[4].labmem=a[4].lable[a[2].posmem];
            a[4].posmem=a[4].position[a[2].posmem];
        }
        /////four over
        
        /////stage five
        if(a[5].act==1)
        {
            for(i=1;i<=4;i++)
            {
                if(a[5].lable[i]==a[1].labmem)
                {
                    printf("%d %d\n",a[5].position[i],a[5].lable[i]);
                    break;
                }
            }
        }
        else if(a[5].act==2)
        {
            for(i=1;i<=4;i++)
            {
                if(a[5].lable[i]==a[2].labmem)
                {
                    printf("%d %d\n",a[5].position[i],a[5].lable[i]);
                    break;
                }
            }
        }
        else if(a[5].act==3)
        {
           for(i=1;i<=4;i++)
            {
                if(a[5].lable[i]==a[4].labmem)
                {
                    printf("%d %d\n",a[5].position[i],a[5].lable[i]);
                    break;
                }
            }
        }
        else if(a[5].act==4)
        {
            for(i=1;i<=4;i++)
            {
                if(a[5].lable[i]==a[3].labmem)
                {
                    printf("%d %d\n",a[5].position[i],a[5].lable[i]);
                    break;
                }
            }
        }
        //////over
	}		
}

