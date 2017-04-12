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

int a[11100];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,maxx,ma;
	scanf("%d",&zu);
	while(zu--)
	{
		CLR(a,0);
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			a[i+n]=a[i];
		}
		maxx=0;
		for(i=0;i<m;i++)
		{
			maxx+=a[i];
		}
		ma=maxx;
		for(i=0;i<2*n;i++)
		{
			
			ma-=a[i];
			ma+=a[m+i];
			//printf("%d\n",ma);
			if(ma>maxx)
			maxx=ma;
		}
		
		printf("%d\n",maxx);
		
	}
}