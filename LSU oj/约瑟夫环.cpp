#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
typedef struct joseph
	{
		int now;
		int next;
		int pre;
	}joseph;

int main()
{
	int m,n,rec1,rec2,j,i,count=0,total;
	joseph a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i].now=i;
		a[i].next=i+1;
		a[i].pre=i-1;
	}
	a[n-1].next=a[0].now;
	a[0].pre=a[n-1].now;
	total=n;
	rec1=0;
	while(total>1)
	{
		for(i=0;i<4%total;i++)
		{
			rec1=a[rec1].next;
		}
		rec2=a[rec1].next;
		a[a[rec1].next].pre=a[rec1].pre;
		a[a[rec1].pre].next=a[rec1].next;
		rec1=rec2;
		total--;
		count++;
	}
	printf("%d\n",rec1);
}