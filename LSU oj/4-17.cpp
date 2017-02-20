#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
int a[1005];
int main()
{
	int n,i,j,flags;
	while(scanf("%d",&n)!=EOF)
	{
		//memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		j=0;
		sort(a,a+n);
		do{					
	//	if(n>=5)
	//	{
			a[n-1]=a[n-1]-4;
		a[n-2]-=1;
		a[n-3]-=1;
		a[n-4]-=1;
		a[n-5]-=1;
		j++;
	//	}
		/*else if(n==4)
		{
			a[n-1]=a[n-1]-4;
		a[n-2]-=1;
		a[n-3]-=1;
		a[n-4]-=1;
		
		j++;
		}
		else if(n==3)
		{
			a[n-1]=a[n-1]-4;
		a[n-2]-=1;
		a[n-3]-=1;
		j++;
		}
		else if(n==2)
		{
			a[n-1]=a[n-1]-4;
		a[n-2]-=1;
		j++;
		}
		else if(n==1)
		{
			a[0]-=4;
			j++;
		}
		
		/*for(i=0;i<n;i++)
		{
			if(a[i]>0)
			{
				flags=1;
				break;
			}
		}	*/	
		if(a[n-1]>a[n-2]&&n!=1)
			continue;
		sort(a,a+n);
		}while(a[n-1]>0);
		printf("%d\n",j);
		
	}	
} 