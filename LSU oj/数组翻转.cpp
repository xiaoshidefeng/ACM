#include<stdio.h>
int main()
{
	int a[101][101];
	int i,j,b,c,zu;
	scanf("%d",&i);
	j=i;
	for(b=0;b<i;b++){
		for(c=0;c<i;c++){
			scanf("%d",&a[b][c]);
		}
	}
	for(b=(i-1);b>=0;b--){
		for(c=0;c<i;c++){
			printf("%d",a[b][c]);
			if(c<(i-1))
				printf(" ");
		}
		printf("\n");
	} 
	return 0;
}