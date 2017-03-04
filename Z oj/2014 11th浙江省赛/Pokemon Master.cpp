#include<stdio.h>
int main()
{
	int a[100];
	int zu,n,i,j,q,w,sum1,sum2,x,c;
	scanf("%d",&zu);
	
	while(zu--)
	{
		scanf("%d%d",&q,&w);
		for(i=0,sum1=0;i<q;i++)
		{
			scanf("%d",&x);
			sum1+=x;
		}
		for(i=0,sum2=0;i<w;i++)
		{
			scanf("%d",&x);
			sum2+=x;
		}
		if(sum1>sum2)
		{
			printf("Calem\n");
		}else if(sum2>sum1)
		{
			printf("Serena\n");
		}else{
			printf("Draw\n");
		}
	}
} 