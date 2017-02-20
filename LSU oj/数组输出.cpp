#include<stdio.h>
int main()
{
	int a[1000];
	int num,n,i,j,b;
	scanf("%d",&i);
	j=i;
	num=0;
	b=1;
	for(;i>0;i--){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(;j>0;j--){	
		if(a[j]>n){		
			if(b!=1)		
			printf(" %d",a[j]);	
			num=1;
			if(b==1){
				printf("%d",a[j]);
				b++;
			}
		}			
	}
	if(num==1)
		printf("\n");
	if(num==0)
		printf("NO\n");
} 