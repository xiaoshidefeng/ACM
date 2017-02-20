#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char a[50];
int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char c[11]={'1','0','X','9','8','7','6','5','4','3','2'};
int main()
{
    int i,j,sum=0;
    char x;
    gets(a);
    for(i=0;i<17;i++)
    {
        sum+=(a[i]-'0')*b[i];
    }
    sum=sum%11;
    x=a[17];
    if(c[sum]==x)
        printf("YES\n");
    else
    printf("NO\n");
}
    