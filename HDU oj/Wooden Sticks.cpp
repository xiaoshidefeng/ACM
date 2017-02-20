#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
#define maxn  10000
int a[maxn][5];
int main()
{
    int zu,gen,n,i,j,x,temp,s,t,flags,ma;
    while(scanf("%d",&zu)!=EOF)
    {
        while(zu--)
        {   x=0;
        	flags=0;
            memset(a,0,sizeof(a));
            scanf("%d",&gen);
            n=gen;
            for(int x=0;x<gen;x++)
            {
                scanf("%d%d",&a[x][0],&a[x][1]);
            }
            //printf("%d %d\n",a[0][0],a[0][1]);
            gen=n;		
            //maopao
             for(i = 0; i < n; i++)
            {
                for(j = 0;  j < n-i-1; j++)
                {
                    if(a[j][0] > a[j + 1][0])
                    {
                        temp = a[j][0];
                        a[j][0] = a[j + 1][0];
                        a[j + 1][0] = temp;
                        //////
                        temp = a[j][1];
                        a[j][1] = a[j + 1][1];
                        a[j + 1][1] = temp;
                    }
                }
            }
            //printf("%d %d\n",a[4][0],a[4][1]);
                ////////////  ≈≈–ÚÕÍ≥… //////////// 
				//a[n-1][2]=0;         
             for(int i=0;i<n;i++)
             {
             	if(a[i][2]==1)
             	continue;
             	else
             	x++;
				ma=a[i][1];         	
             	for(int j=1;j<n;j++)
                if(a[j][1]>=ma&&a[j][2]==0)
                {   //x++;
                    //s=gen;
                    //break;
                    a[j][2]=1;
                    ma=a[j][1];
                }
                for(int e=1;e<n;e++)
                {
                	if(a[e][2]==0)
                	{
	                	flags=1;
	                	break;
	                }
                }
                if(flags==1)
                {
                	flags=0;
                	//x++;
                	continue;
                }
                else
                	break;
             }             
             printf("%d\n",x);
        }
    }
}
             
             //gen=n;
             //
            /* for(i = 0; i < n; i++)
            {
                for(j = 0; i + j < n - 1; j++)
                {
                    if(a[j][1] > a[j + 1][1])
                    {
                        temp = a[j][1];
                        a[j][1] = a[j + 1][1];
                        a[j + 1][1] = temp;
                        //////
                        temp = a[j][0];
                        a[j][0] = a[j + 1][0];
                        a[j + 1][0] = temp;
                    }
                }
            }

            while(gen--)
            {
                if(a[gen][0]<a[n][0])
                {   x++;
                    t=gen;
                    break;
                }
             }
             if(s<t)  //s is big
               s=t;
            //for(;n>s;--n)
            //{
                for(t=n;t>s;--t)
                {
                   if(a[t][0]<a[t][0])
                   {
                        x++;
                        break;
                   }
                }
            //}
            x=x+n-t;

            // printf("%d\n",x);
        }
    }
}
              //find
            /*while(gen--)
            {
                if(a[gen][0]>max)
                {
                    max=a[gen][0];
                }
            }
            gen=n;
            i++;
            while(gen--)
            {
                 if(a[gen][1]<*/
