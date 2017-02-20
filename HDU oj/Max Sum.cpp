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

int maxs(int a,int b){
	return a>=b?a:b;
}

int main()
{
	int a[100001];
	int b[100001];
	int n,i,j,k,c,len1,maxnow,n2,begins,end,sum,star;
	scanf("%d",&n);
	for(int q=1;q<=n;q++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%d",&n2);
		begins=1;
		end=1;
		star=1;
		for(i=1;i<=n2;i++)
		{
			scanf("%d",&a[i]);
		}
		sum=0;
		maxnow=-1001;
		for(i=1,c=0;i<=n2;i++)
		{
			sum+=a[i];
			
			if(sum>maxnow)
			{
				maxnow=sum;
				end=i;
				begins=star;
			}
			if(sum<0)
			{
				c++;
				sum=0;
				star=i+1;
			}
		}		
			printf("Case %d:\n",q);
			printf("%d %d %d\n",maxnow,begins,end);
			if(q!=n)
			printf("\n");
	}
}