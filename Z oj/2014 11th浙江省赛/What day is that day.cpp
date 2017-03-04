#include<stdio.h>

int qmod(int a,int b)
{
	int r=1;
	while(b)
	{
		if(b&1)
			r=((r%7)*(a%7))%7;
		a=((a%7)*(a%7))%7;
		b>>=1;
		
	}
	return r;
}
int x[400];
int main()
{
	int zu,c=0,n,q;
	long long k;
	for(int i=1;i<300;i++)
	{
		//if(!(i%7))
		//printf("\n\n");
		c+=qmod(i,i);
		x[i]=(c%7);
	}
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lld",&k);
		k=k%294;
		if(x[k]==0)
		{
			printf("Saturday\n");
		}else if(x[k]==1)
		{
			printf("Sunday\n");
		}else if(x[k]==2)
		{
			printf("Monday\n");
		}else if(x[k]==3)
		{
			printf("Tuesday\n");
		}else if(x[k]==4)
		{
			printf("Wednesday\n");
		}else if(x[k]==5)
		{
			printf("Thursday\n");
		}else if(x[k]==6)
		{
			printf("Friday\n");
		}
		
		
	}
	
	
}