#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,k,p,i,w;
	int a[1001];	
	scanf("%d%d",&n,&k);		
	for(w=1;w<=n;w++)  //ȫ����Ϊ 1 
		a[w]=1;
	for(i=2;i<=k;i++){     //���塣��һ��+1,����ǲ����������ж� 
		for(p=i;p<=n;p=p+i){
			a[p]++;			
		}	
	}

	for(p=1;p<=n;p++){     //�ж���ż 
		if((a[p]%2)==1||p==1)
			printf("%d ",p);
	}
	return 0;
}