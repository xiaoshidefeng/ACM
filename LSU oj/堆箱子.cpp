#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int a[100000];
int main()
{
	int zu,num,aveg,ci;
	while(scanf("%d",&zu)!=EOF)
	{
		num=0;
		ci=0;
		a[0]=0;
		memset(a,0,sizeof(a));
		//printf("%d\n",a[0]);
		for(int i=0;i<zu;i++)
		{
			scanf("%d",&a[i]);//printf("%d\n",a[0]);
			num+=a[i];
			//printf("%d\n",num);
		}
		aveg=num/zu;
		//printf("%d\n",aveg);
		for(int i=0;i<zu-1;i++) ////
		{
			if(a[i]>=aveg)
			{
				ci=ci+a[i]-aveg;
				a[i+1]=a[i+1]+a[i]-aveg;
			}
			else
			{
				ci=ci+aveg-a[i];
				a[i+1]=a[i+1]-(aveg-a[i]);
			}
		}
		printf("%d\n",ci);
	}
}