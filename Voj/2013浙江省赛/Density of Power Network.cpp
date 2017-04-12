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
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

typedef struct nd{
	int x,y;
}nd ;

nd s[20000];

int d1[20000];
int d2[20000];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,m,cnt,f;
	double x1,y1,nk,kk,n;
	nd a;
	scanf("%d",&zu);
	while(zu--)
	{
		CLR(d1,0);
		CLR(d2,0);
		CLR(s,0);
		scanf("%lf%d",&n,&m);
		cnt=0;
		for(i=0;i<m;i++)
		{
			scanf("%d",&d1[i]);
		}
		for(i=0;i<m;i++)
		{
			scanf("%d",&d2[i]);
		}
		cnt=0;
		kk=0;
		for(i=0;i<m;i++)
		{
			f=0;
			if(d1[i]>d2[i])
			{
				k=d1[i];
				d1[i]=d2[i];
				d2[i]=k;
			}
			for(j=0;j<cnt;j++)
			{
				
				if(d1[i]==s[j].x&&d2[i]==s[j].y)
				{
					f=1;
					break;
				}
			}
			if(f==0)
			{
				s[cnt].x=d1[i];
				s[cnt].y=d2[i];
				kk=kk+1.0; 
				++cnt;
			}
		}
		
		//nk=(double)n;
		printf("%.3lf\n",kk/n);
		
	}
}