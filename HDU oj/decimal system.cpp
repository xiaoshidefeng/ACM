#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    __int64  zu,num,n,flage;
    double i,sum,jinzhi;
     while(scanf("%I64d",&zu)!=EOF)
     {
        sum=0;
        while(zu--)
        {
            flage=1;
            scanf("%I64d(%lf)",&num,&jinzhi);
            for(i=0;num>=10;i++)
            {
                n=num%10;
                sum=sum+n*pow(jinzhi,i);
                num/=10;
                flage=0;
            }
            if(num>0&&flage==1)
            sum=sum+num;
            else if(flage==0&&num>0)
             sum=sum+num*pow(jinzhi,i);
        }
        printf("%.0lf\n",sum);
     }
}

     
