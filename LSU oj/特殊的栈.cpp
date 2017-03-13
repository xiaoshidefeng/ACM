#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
int a[20000];
int b[20000];
int main()
{
	//freopen("f:/input.txt","r",stdin);
	int head,tail,n,i,j,k,m,f,cnt;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==m&&n==0)
			break;
		CLR(a,0);
		CLR(b,0);
		for(i=1;i<=m;i++)
		{
			scanf("%d",&a[i]);
		}
		j=1;
		for(i=m;i>=0;i--)
		{
			if(a[i]==0)
			{
				continue;
			}
			for(k=i-1;k>=0;k--)
			{
				if(a[i]==a[k])
				{
					a[k]=0; 
					//printf("%d\n",k);
				}
			}
			if(a[i]==0)
			{
				continue;
			}
				b[j]=a[i];
				++j;
			
		}
		if(b[n]!=0){
			printf("%d\n",b[n]);
		}
		else{
			while(b[n]==0)
			{
				--n;
			}
			//printf("%d\n",b[n]);
			printf("%d\n",b[n]);
		}
			
	}
}