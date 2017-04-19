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

int a[100011];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,maxn,maaa,cnt;
	scanf("%d",&zu);
	while(zu--)
	{
		CLR(a,0);
		scanf("%d",&k);
		maaa=0;
		for(i=1;i<=k;i++)
		{
			scanf("%d",&a[i]);
		}
		maxn=0;
		cnt=0;
		for(i=k;i>0;i--)
		{
			
			if(cnt+a[i]>maxn) maxn = cnt+a[i];
			if(a[i]>0) ++cnt;
		}
		
		
		printf("%d\n",maxn);
		
	}
}