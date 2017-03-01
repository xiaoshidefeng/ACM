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
#define Nb 9999999999999999

const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
__int64 n;
bool finds = false;
void dfs(__int64 x,int step)
{
	if(step>=18)
		return;
	if(finds)
		return;
	if(x%n)
	{
		dfs(x*10+1,step+1);
		dfs(x*10,step+1);
	}
	if((x%n)==0)
	{
		printf("%I64d\n",x);
		finds=true;
		return;
	}
	return;
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	__int64 x;
	while(scanf("%I64d",&n)!=EOF&&n)
	{
		if(n<=10)
		{
			x=10;
		}else if(n<=100)
		{
			x=100;
		}else{
			x=1000;
			
		}
		finds=false;
		dfs(x,0);
		
	} 
}