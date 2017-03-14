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

int pre[10000];
int cunt;

int finds(int x)
{
	if(x!=pre[x])
		pre[x]=finds(pre[x]);
	return pre[x];
}

void join(int x,int y)
{
	int p1 = finds(x);
	int p2 = finds(y);
	if(p1==p2)	return;
	else {pre[p1]=p2; ++cunt;}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,a,b; 
	scanf("%d",&zu);
	while(zu--)
	{
		cunt=0;
		for(i=0;i<1002;i++)
			pre[i]=i;
		
		scanf("%d%d",&n,&m);
		
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&a,&b);
			join(a,b);
		}
		printf("%d\n",n-cunt);
		//getchar();  
	}
}