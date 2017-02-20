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
	int day;
	int r;
	int y;
	int n;
	
}aaa;

bool cmp(const aaa &a,const aaa&b)
{
	return a.day<b.day;
}
int main()
{
	int i,j,k,ri,nian,yue;
//	int a[1000];
	aaa a[1000];
	i=0;
	while(scanf("%d/%d/%d",&yue,&ri,&nian)!=EOF)
	{
		a[i].day=ri+yue*28+nian*365;
		a[i].r=ri;
		a[i].y=yue;
		a[i].n=nian;
		i++;
	}	
	sort(a,a+i,cmp);
	for(j=0;j<i;j++)
	{
		if(a[j].r>=10&&a[j].y>=10)
		printf("%d/%d/%d\n",a[j].y,a[j].r,a[j].n);
		else if(a[j].r>=10&&a[j].y<10)
		printf("0%d/%d/%d\n",a[j].y,a[j].r,a[j].n);
		else if(a[j].r<10&&a[j].y>=10)
		printf("%d/0%d/%d\n",a[j].y,a[j].r,a[j].n);
		else
		printf("0%d/0%d/%d\n",a[j].y,a[j].r,a[j].n);
	}
	return 0;
}