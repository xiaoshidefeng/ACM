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
	int i,j,k,n,m,a,b,c,d;
	set<int>s;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	

	
	for(i=1;i<=10000;i++)
	{
		s.insert(b);
		b+=a;
	}
	
	for(i=1;i<10000;i++)
	{
		if(s.find(d)!=s.end())
		{
			printf("%d\n",d);
			return 0;
			
		}
		d+=c;
	}
	
	
 	printf("-1\n");
	 
	 
	 
}
