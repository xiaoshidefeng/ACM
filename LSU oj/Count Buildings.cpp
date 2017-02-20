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

typedef struct hhh{
	double dis;
	double hi;
	double rat;
}hhh;
bool cmp(const hhh &a,const hhh &b)
{
	return a.dis<b.dis;
}
hhh a[10001];
int main()
{
	int i,j,k,zu,n;
	double big;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf%lf",&a[i].dis,&a[i].hi);
			a[i].rat=a[i].hi/a[i].dis;
		}
		sort(a,a+n,cmp);
		big=a[0].rat;
		for(i=0,k=1;i<n;i++)
		{
			if(a[i].rat>big)
			{
				big=a[i].rat;
				k++;
			}
		}
		printf("%d\n",k);
	}
}