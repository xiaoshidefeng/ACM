#include<stdio.h>
int main()
{
    int a,b,num,zu,b2,c,i,b3;
    scanf("%d",&zu);
    while(zu--){
        scanf("%d",&a);
        b2=a;
        b=a%10;
        b3=b;
        if(b==0||b==1||b==5||b==6) {
            printf("%d\n",b);
            continue;
            }
        if(a<10){
            for(i=1;i<b2;i++){
                 a=(a*(b2))%10;
                 }
            printf("%d\n",a);
            continue;
            }
        c=a%4;
        c=c+3;
        for(i=1;i<=c;i++)
            b=b3*b;
        printf("%d\n",b%10);
    }
}
