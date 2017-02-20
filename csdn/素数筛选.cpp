#include<stdio.h>
__int64 p[100000]={0};
__int64 a[100000]={0};
int main()
{
   __int64 i,h,k=0;
   for(i=1;i<100000;i++)
     a[i]=i+1;
   for(i=0;i<100000;i++)
     if(a[i]!=0)
       {
         p[k]=a[i];
         for(h=i;h<010000;h++)
           if(a[h]%p[k]==0)
            a[h]=0;
         k++;
       }
   i=0;
   printf("primes:");
   while(p[i]!=0)
   {
    printf("%5I64d",p[i]);
    i++;
   }
}