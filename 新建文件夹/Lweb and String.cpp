#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<sstream>
#include<cstring>
#include<bitset>
#include<cstdio>
#include<string>
#include<deque>
#include<stack>
#include<cmath>
#include<queue>
#include<set>
#include<map>
using namespace std;
#define INF 0x3f3f3f3f
#define CLR(x,y) memset(x,y,sizeof(x))
#define LC(x) (x<<1)
#define RC(x) ((x<<1)+1)
#define MID(x,y) ((x+y)>>1)
typedef pair<int,int> pii;
typedef long long LL;
const double PI=acos(-1.0);
const int N=100010;
char s[N];
set<char>pos;
int main(void)
{
	int tcase,i,j,ans;
	scanf("%d",&tcase);
	for (int q=1; q<=tcase; ++q)
	{
		pos.clear();
		scanf("%s",s);
		int len=strlen(s);
		for (i=0; i<len; ++i)
		{
			pos.insert(s[i]);
		}
		printf("Case #%d: %d\n",q,pos.size());
	}
	return 0;
}