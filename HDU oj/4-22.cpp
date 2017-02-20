#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int r[999999];
int jinzhi(int result[],__int64 a)
{
	int i=0;
	if(a<0) return -1;
	while(a!=0)
	{
		result[i]=a%3;
		a=a/3;
		i++;
	}
	return i;
}
int main()
{
	
	__int64 q,n,i;
	int N,M,x;
	scanf("%d",&N);
	while(N--){
	memset(r,0,sizeof(r));
	scanf("%d%I64d",&M,&q);
	q%=(int)(pow(3,M));
	n=jinzhi(r,q);
	 //if (M>n) for (i=0;i<M-n;i++)
	//	printf("R");
	for(i=M-1;i>=0;i--)
	//for(i=0;i<n;i++)
	{
		if (r[i]==0) printf("R");
		else if (r[i]==1) printf("G");
		else printf("B"); 
	}	
	printf("\n");
	}
}
