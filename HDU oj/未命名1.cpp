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

int a[1003];
int b[1003]; 	//a数组存储原始数据  b数组存储当前最大的数 

int main()
{
	int i,j,k,n,ans;
	while(scanf("%d",&n)!=EOF&&n)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		
		for(i = 1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		b[1]=a[1];
		for(i = 2;i<=n;i++)
		{
			for(j=1;j<i;j++)
			{
				if(a[j]<a[i])
				{
					b[i] = max(	b[i],a[i]+b[j]);
				}
			}
			b[i]=max(a[i],b[i]);
		}
		
		ans=-9999999;
		for(i=1;i<=n;i++)
		{
			if(ans<b[i])
			{
				ans=b[i];
			}
		}
		printf("%d\n",ans);
		 
	} 
}