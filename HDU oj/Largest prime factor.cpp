#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define maxn 1000000
int lpf[maxn];

int main()
{
	int num,i,j,n=0;	
	memset(lpf,0,sizeof(lpf));	
	for(i=2;i<maxn;i++){		
		if(lpf[i]==0){
			n++;
			for(j=i;j<maxn;j+=i)
				lpf[j]=n;
		}		
	}	
	while(scanf("%d",&j)!=EOF)
	printf("%d\n",lpf[j]);
}