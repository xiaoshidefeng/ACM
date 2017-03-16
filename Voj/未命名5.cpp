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
bool f;
int cnt;

int pre[100001];
bool vis[100001];
int finds(int x)
{
	return x==pre[x]?pre[x]:pre[x]=finds(pre[x]);
}

void join(int x,int y)
{
	x=finds(x);
	y=finds(y);
	if(x==y) { f=false; return;}
	pre[y]=x;
	++cnt;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	
	int i,j,k,a,b;
	while(1)
	{
		set<int>s;
		CLR(vis,false);
		f=true;
		cnt=0; 
		for(i=0;i<100000;i++)
			pre[i]=i;
		while(scanf("%d%d",&a,&b)!=EOF&&((a!=0||b!=0)&&(a!=-1||b!=-1)))
		{
			vis[a]=true;
			vis[b]=true;
			s.insert(a);
			s.insert(b);
			join(a,b);
		}
		if(a==-1&&b==-1)
			break;
		
		if(((s.size()-1)!=cnt)&&cnt!=0)
		{
			printf("No\n");
			continue;
		}
		if(f)
		{ 
			printf("Yes\n"); 
			continue; 
		} 
		else
		printf("No\n");

	}
}