#include<stdio.h>
int main(void)
{
	int i,j,b,temp,zu;
	int a[10001];
	scanf("%d",zu);
	for(i=0;i<zu;i++)
		scanf("%d",&a[i]);
	for(j=0;j<zu;j++){
		for(i=0;i<zu-1-j;i++){
			if(a[i]<a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<zu;i++){
		printf("%d\n",a[i]);
	}
	return 0;	
	
} 