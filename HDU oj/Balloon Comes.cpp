#include<stdio.h>
#include<string.h>

int main()
{
	double a,b,c;
	int zu,a2,b2;
	char x[20];
	scanf("%d",&zu);
	while(zu--){
		
		scanf("%s",&x);
		scanf("%lf%lf",&a,&b);
		if(strcmp(x,"+")==0)
			printf("%.0lf\n",a+b);
		else if(strcmp(x,"-")==0)
			printf("%.0lf\n",a-b);
		else if(strcmp(x,"*")==0)
			printf("%.0lf\n",a*b);
		else if(strcmp(x,"/")==0){//区分整除情况 
			c=0;
			a2=(int)a;
			b2=(int)b;
			if((a/b)-(a2/b2)>0)
			printf("%.2lf\n",a/b);
			else
			printf("%.0lf\n",a/b);
		}
		
		
	}
}