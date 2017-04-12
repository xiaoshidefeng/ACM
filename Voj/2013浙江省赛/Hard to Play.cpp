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



int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,a,b,c,comb,maxx,minn;
	
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d%d",&a,&b,&c);
		comb=0;
		maxx=minn=0;
		for(i=0;i<c;i++)
		{
			maxx+=(50*(comb*2+1));
			++comb;
		}
		for(i=0;i<b;i++)
		{
			maxx+=(100*(comb*2+1));
			++comb;
		}
		for(i=0;i<a;i++)
		{
			maxx+=(300*(comb*2+1));
			++comb;
		}
		comb = 0;
		for(i=0;i<a;i++)
		{
			minn+=(300*(comb*2+1));
			++comb;
		}
		for(i=0;i<b;i++)
		{
			minn+=(100*(comb*2+1));
			++comb;
		}
		for(i=0;i<c;i++)
		{
			minn+=(50*(comb*2+1));
			++comb;
		}
		
		printf("%d %d\n",minn,maxx);
		
	}
	
}