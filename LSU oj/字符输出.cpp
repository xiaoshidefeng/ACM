#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
     char c;
     int a;
     scanf("%c%d",&c,&a);
     a--;
     while(a--)
     printf("%c",c);
     printf("%c\n",c);
}