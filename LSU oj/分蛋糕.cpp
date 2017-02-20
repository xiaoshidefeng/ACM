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
int a[10001];
int b[10001];
int main()
{
	int zu,man,cake,big,i,j,k,n,sum,ave,m,f;
	
	scanf("%d",&zu);
	while(zu--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%d%d",&man,&n);
		sum=0;
		m=man;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
			sum+=a[i];
		}
		ave=sum/man;
		if(ave==1&&sum>=man)
		{
			printf("1\n");
			continue;
		}
		for(i=2;i<=ave+1;i++)
		{
		//	f=0;
			m=man;
			for(j=0;j<n;j++)
			{
				for(k=j;b[j]>=i;)
				{
					b[j]-=i;
					m--;
				}
				b[j]=a[j];
			}
			if(m>0)
			{
				printf("%d\n",i-1);
				break;
			}
			
		}
	}
}