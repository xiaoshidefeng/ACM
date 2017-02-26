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

typedef struct buy{
	int now;
	int atf;
	int subs;
}buy;

bool cmps(const buy &a,const buy &b)
{
	return a.subs<b.subs;
}

buy a[200001];


int main()
{
	int n,k,i,j,m;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i].now);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i].atf);
			a[i].subs=a[i].now-a[i].atf;
			
		}
		sort(a,a+n,cmps);
		m=0;
		i=0;
		for(;a[i].subs<0||i<k;i++)
		{
			m+=a[i].now;
		}
		for(;i<n;i++)
		{
			m+=a[i].atf;
		}
		printf("%d\n",m);
		
	}
}