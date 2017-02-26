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
int one[101];
int two[101];
int sums[6];
int sumx[6];


int main()
{
	int zu,i,j,k,n,n1,n2,n3,n4,n5,f,sum;
	while(scanf("%d",&n)!=EOF)
	{
		memset(one,0,sizeof(one));
		memset(two,0,sizeof(two));
		memset(sums,0,sizeof(sums));
		memset(sumx,0,sizeof(sumx));
		
		n1=n2=n3=n4=n5=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&one[i]);
			sums[one[i]]++;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&two[i]);
			sumx[two[i]]++;
		}
		for(i=1,f=0;i<=5;i++)
		{
			if((sumx[i]+sums[i])%2!=0)
			{
				printf("-1\n");
				f=1;
				break;
			}
		}
		if(f)
			continue;
		for(sum=0,i=1;i<=5;i++)
		{
			if(sumx[i]!=sums[i])
			{
				if((sumx[i]-sums[i])>0)
				{
					sum+=(sumx[i]-sums[i]);
				}else{
					sum+=(sums[i]-sumx[i]);
				}
			}
		}
		printf("%d\n",sum/4);	
	}
}