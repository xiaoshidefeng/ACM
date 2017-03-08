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
struct sp{
	int dmg,cost;
};
sp s[100];
int a[100];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,heal,mofa,guai,spell;
	scanf("%d",&zu);
	while(zu--)
	{
		CLR(a,0);
		CLR(s,0);
		scanf("%d%d%d%d",&guai,&spell,&heal,&mofa);
		for(i=0;i<guai;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<spell;i++)
			scanf("%d%d",&s.dmg,&s.cost);
		
	}
}