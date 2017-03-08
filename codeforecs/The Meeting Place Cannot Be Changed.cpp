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
const double cha=0.0000001;
double v[N];
double x[N];

double l,r,r2,maxn=0.0,mids;
int n;
bool check(double mi)
{
	double maxx=0.0,minxx=1000000000;
	for(int i=1;i<=n;i++)
	{
		maxx=max(maxx,x[i]-v[i]*mi);
		minxx=min(minxx,x[i]+v[i]*mi);
		
	}
	if(maxx<minxx)
			return false;
			
	return true;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&x[i]);
		maxn=max(x[i],maxn);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&v[i]);
	}
	l=0;
	r=r2=maxn;
	while(r-l>cha)
	{
		mids=(r+l)/2;
		if(check(mids))
		{
			l=mids+cha;
		}else{
			r=mids-cha;
		}
	}
	printf("%lf\n",l-cha);
	
}