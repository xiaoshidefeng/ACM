#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char a[3000];
int main()
{
    int len1,i;
    while(scanf("%s",a)!=EOF)
    {
        len1=strlen(a);
        for(i=0;i<len1;i++)
        {
            if(a[i]=='1')
            printf("0");
            else
            printf("1");
        }
        printf("\n");

    }
}