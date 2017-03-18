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
	__int64 i,j,k,n,m,sum,x;
	while(scanf("%I64d%I64d%I64d",&n,&m,&k)!=EOF)
	{
		sum=0;
		if(k<6)
		{
			printf("0\n");
			continue;
		}
		sum+=n*m;
		for(i=6;i<=k;i=i+2)
		{
			x=(i-4)/2;
			if(n-x>0)
				sum+=((n-x)*m);
			if(n-x>0)
				sum+=((m-x)*n);
		}
		printf("%I64d\n",sum);
	}
	
}