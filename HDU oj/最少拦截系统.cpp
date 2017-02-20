#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define maxn 30001
int a[maxn];
int b[maxn];
int main()
{
     int zu,n,t=0,mx,flags;
     while(scanf("%d",&zu)!=EOF)
    {
         for(n=0;n<zu;n++)
         scanf("%d",&a[n]);
         
         t=0;         
         memset(b,0,sizeof(b));
         b[0]=a[0];
         for(n=0;n<zu-1;n++)
         {
             if(a[n+1]>a[n])
            {                
                flags=0;
                if(t==0)
                {
                    t=1;
                    t++;
                    b[t]=a[n+1];
                }
                    
                else
                {
                    sort(b,b+t-1);
                    for(int i=0;i<=t;i++)
                    {
                        if(b[i]>=a[n+1])
                        {
                            b[i]=a[n+1];
                            flags=1;
                            break;
                        }
                    }
                    if(flags==0)
                    {
                        t++;
                        b[t]=a[n+1];
                    }
                }
            }
            else
            {
                sort(b,b+t);
                    for(int i=0;i<=t;i++)
                    {
                        if(b[i]>=a[n+1])
                        {
                            b[i]=a[n+1];
                            flags=1;
                            break;
                        }
                    }
                    if(flags==0)
                    {
                        t++;
                        b[t]=a[n+1];
                    }    
            }
            
            
        
        
        }
        printf("%d\n",t);
    }
}     