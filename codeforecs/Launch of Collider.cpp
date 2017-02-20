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

typedef struct aaa{
	char c;
	int  dis;
}aaa;

//bool cmp(const aaa &a,const aaa &b)
//{
//	return a.dis<b.dis;
//}

int main()
{
	int i,j,k,f,mins,x;
	aaa a[200001];
	while(scanf("%d",&k)!=EOF)
	{
		getchar();
		for(i=0;i<k;i++)
		{
			scanf("%c",&a[i].c);
		} 
		
		for(i=0;i<k;i++)
		{
			scanf("%d",&a[i].dis);
		}
		//printf("%d %d\n",a[1].dis,a[2].dis); 
		//sort(a,a+k,cmp);
		if(k==1)
		{
			printf("-1\n");
			continue;
		}
	//	printf("%c ",a[1].c);
		f=0;
		x=0;
		for(i=1;i<k;i++)
		{
			if(a[i].c!=a[i-1].c)
			{
				f++;//printf("-1\n");
				if(a[i].dis==a[i-1].dis)
				{
					printf("0\n");
					x=1;
					break;
				}
			}
		}
		if(x==1)
		{
			continue;
		}
		if(f==1||f==0)
		{
			printf("-1\n");
			continue;
		}
		mins=9999999;
		for(i=1;i<k;i++)
		{
			if(a[i].c!=a[i-1].c)
			{//printf("-1\n");
				if((a[i].dis-a[i-1].dis)<mins)
				{//printf("   %d",mins);
					
					mins=a[i].dis-a[i-1].dis;//printf("   %d   ",mins);
				}
			}
		}
		printf("%d\n",mins/2);
	}
}