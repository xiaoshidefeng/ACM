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

struct dd{
	int val,cnt;
};

dd a[10000];


int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,x,cc,f,maxn,v,q;
	scanf("%d",&zu);
	while(zu--)
	{
		CLR(a,0);
		scanf("%d",&k);
		cc=0;
		for(i=0;i<k;i++)
		{
			scanf("%d",&x);
			f=0;
			for(j=0;j<cc;j++)
			{
				if(a[j].val==x)
				{
					f=1;
					++a[j].cnt;
					break;
				}
			}
			if(f==0)
			{
				a[cc].val=x;
				++a[cc].cnt;
				++cc;
			}
		}
		maxn=-1;
		v=-1;
		for(i=0;i<cc;i++)
		{
			if(maxn<a[i].cnt)
			{
				maxn=a[i].cnt;
				v=a[i].val;
			}
		}
		q=0;
		for(i=0;i<cc;i++)
		{
			if(maxn==a[i].cnt)
			++q;
		}
		if(q==1)
		{
			printf("%d\n",v);
		}else{
			printf("Nobody\n");
		}
		
	}
}