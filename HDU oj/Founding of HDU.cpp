#include<stdio.h>
int main()
{
	int zu,num,maxn;
	while(scanf("%d",&zu)!=EOF)
	{
		if(zu==0)
			break;
		scanf("%d",&num);
		maxn=num;
		zu--;
		while(zu--)
		{
			scanf("%d",&num);
			if(maxn<num)
			{
				maxn=num;
			}
		}
		printf("%d\n",maxn);
	}
	return 0;
} 