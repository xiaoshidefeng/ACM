#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
typedef struct show{
	int bign;
	int end;
	int fal;
}show;

bool cmp(const show &q,const show &w)
{
	return q.end<w.end;
}

int main()
{
	int n,i,j,v,p,m;
	show a[101];
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		break;
		j=1;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[i].bign,&a[i].end);
		}
		sort(a,a+i,cmp);
	//	printf("%d %d",a[0].bign,a[0].end);
		//printf("%d %d",a[11].bign,a[11].end);
		p=a[0].bign;
		m=a[0].end;
		for(i=1;i<n;i++)
		{
			//if(p>a[i-1].bign)
		//	a[i].fal=100;
			if(a[i].bign>=p&&a[i].bign>=m)
			{
				j++;
				m=a[i].end;
				p=a[i].bign;
			}			
		}
	//	for(i=1;i++;i++)
	//	{
	//		if(a[i].fal==100)
	//		continue;
			
	//	}
		
		printf("%d\n",j);
	}
}