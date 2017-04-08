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

struct buy
{
	double val,wei;
};

bool cmp(const buy &a, const buy &b)
{
	return a.val<b.val;
}

buy b[1111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m;
	double sum;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
		{
			scanf("%lf%lf",&b[i].val,&b[i].wei);
		}
		sort(b,b+m,cmp);
		sum=0;
		for(i=0;i<m;i++)
		{
			if(n>(b[i].val*b[i].wei))
			{
				sum+=b[i].wei;
				n-=(b[i].val*b[i].wei);
			}else {
				sum+=(n/b[i].val);
				break;
			}
		} 
		
		printf("%.2lf\n",sum);
		
		
	} 
}