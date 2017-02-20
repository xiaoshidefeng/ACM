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
int a[300001];
int main()
{
	int zu,i,j,k,n,t,f,now,head,tail;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d",&n,&k);
		for(i = 0;i<n;i++)
		{
			scanf("%d",&a[i]);
			a[i+n]=a[i];
		}
		now=0;
		i=0;
		head = tail = 0;
		f=0;
		while(1)
		{
			while(now<k&&tail<2*n)
			{
				now+=a[tail];
				tail++;
			}
			if(now==k&&tail-head<=n)
			{
				f=1;
				break;
			}
			if(tail==2*n)
			{
				f=0;
				break;
			}
			
			while(tail>head&&now>k||tail-head>n)
			{
				now-=a[head];
				head++;
			}
			
		}
		
		if(f==1)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}