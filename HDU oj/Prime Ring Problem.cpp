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

int pri[12]={2,3,5,7,11,13,17,19,23,29,31,37};
int maps[30];
int vis[30];
int n;
int ispri(int a)
{
	if(a==1)
		return 1;
	for(int i=0;i<12&&pri[i]<a;i++)
	{
		if(a%pri[i]==0)
		{
			return 1; 	//²»ÊÇËØÊý 
		}
	}
	return 2;
}

void rings(int now)
{
	//printf("%d\n",now);
	if((now==n)&&(ispri(maps[1]+maps[n])==2))
	{
		for(int i=1;i<n;i++)
		{
			printf("%d ",maps[i]);
		}
		printf("%d\n",maps[n]);
	}else{
		for(int i=2;i<=n;i++)
		{
			if((ispri(maps[now]+i)==2)&&(vis[i]==0))
			{
				vis[i]=1;
				maps[now+1]=i;
				rings(now+1);
				vis[i]=0;
			}
		}
	}
}

int main()
{
	int cunt =1;
	while(scanf("%d",&n)!=EOF)
	{
		memset(vis,0,sizeof(vis));
		//memset(maps,0,sizeof(maps));
		
		printf("Case %d:\n",cunt++);
		maps[1]=1;
		rings(1);
		printf("\n");
	}
}