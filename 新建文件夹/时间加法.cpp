#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int shi,fen,miao,i,j,sum;
    scanf("%d:%d:%d",&shi,&fen,&miao);
    scanf("%d",&j);
    sum=shi*3600+fen*60+miao+j;
    shi=(sum/3600)%24;
    fen=(sum%3600)/60;
    miao=sum%60;
    if(shi<10)
    printf("0%d:",shi);
    else
    printf("%d:",shi);
    
    if(fen<10)
    printf("0%d:",fen);
    else
    printf("%d:",fen);
    
    if(miao<10)
    printf("0%d\n",miao);
    else
    printf("%d\n",miao);

}