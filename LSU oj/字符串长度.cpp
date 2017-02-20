#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
char a[10000];

int main()
{      char c;
       int i=0;
       while((c=getchar())!=EOF)
       {
            if(c=='\n')
            break;
            i++;
       }
       printf("%d\n",i);
}