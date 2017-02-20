#include<stdio.h>
int main(void)
{
	int i,n,zu,num;
	int a[1001];
	scanf("%d",&zu);
	while(zu--){
		scanf("%d",&n);
		a[1]=a[2]=1;
		for(i=3;i<=n;i++){
			a[i]=a[i-1]+a[i-2];
			num=a[i];	
		}
	printf("%d\n",num);
	}
	return 0;
}