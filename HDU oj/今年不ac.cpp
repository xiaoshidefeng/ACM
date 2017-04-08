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

struct shows{
	int be,en;
	
} ;

bool cmp(const shows &a, const shows &b)
{
	return a.en<b.en;
}


shows s[111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,i,j,k,cnt,e;
	while(scanf("%d",&n)!=EOF&&n)
	{
		CLR(s, 0);
		for(i = 0;i < n;i++)
		{
			scanf("%d%d",&s[i].be, &s[i].en);
		}
		sort(s, s+n, cmp);
		cnt=1;
		e=s[0].en;
		for(i = 1;i < n;i++)
		{
			if(e <= s[i].be)
			{
				++cnt;
				e = s[i].en;
			}
		}
		
		printf("%d\n",cnt);
		
		
	}
}