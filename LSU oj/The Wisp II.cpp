#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

typedef struct mi{
	int ai;
	int bi;
	
} mi;

typedef struct ni{
	int ci;
	int di;
}ni;

typedef struct pi{
	int ei;
	int fi;
}pi;

bool cmp1(const ni &a,const ni &b)
{
	return a.di<b.di;
}
bool cmp2(const pi &a,const pi &b)
{
	return a.fi<b.fi;
}
ni b[10001];
mi a[10001]; 
pi c[10001];
int main()
{
	int i,j,n,zu,maxn,minx,x,q;
	scanf("%d",&zu);
	while(zu--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%d",&n);
		maxn=1;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[i].ai,&a[i].bi);
			if(a[i].ai==1&&a[i].bi==1)
			{
				a[i].ai==999999;
				a[i].bi==999999;
				continue;
			}
			c[i].ei=a[i].ai;
			c[i].fi=a[i].bi;
			if(a[i].bi<=maxn&&a[i].ai>maxn)
			maxn=a[i].ai;
		}
		
		sort(c,c+n,cmp2);
		
		for(i=0;i<n;i++)
		{
			if(c[i].fi<=maxn&&c[i].ei>maxn)
			maxn=c[i].ei;
		}//find maxn
		printf("%d\n",maxn);
		j=0;
		for(i=0;i<n;i++)
		{
			if(a[i].bi<=maxn)
			{
				b[j].ci=a[i].ai;
				b[j].di=a[i].bi;
				j++;	
			}
		}
		sort(b,b+j,cmp1);
		maxn=b[j-1].di;
			printf("%d\n",maxn);
		minx=1;
		x=1;
		i=0;
		q=1;
		for(;b[i].ci==1&&b[i].di==1;i++)
		{
			continue;
		}
		while(i<j)
		{
			for(;minx>=b[i].di&&i<j;i++)
			{
				if(x<b[i].ci||(x>b[i].di&&b[i].di>minx)){
					q++;
					x=b[i].ci;
				}	
			}
			minx=x;
		
		}	
		printf("%d\n",q);
	}
}