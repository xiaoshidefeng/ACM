#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[200];
    int n,i,j,len1;
    scanf("%d",&n);
    getchar();
    gets(a);
    len1=strlen(a);
    for(i=len1-n;i<len1;i++)
    printf("%c",a[i]);
    for(i=0;i<len1-n;i++)
    printf("%c",a[i]);
    printf("\n");
}