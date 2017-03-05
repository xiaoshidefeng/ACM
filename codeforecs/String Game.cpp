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
int l,r,n,len2,r2;
char b[200002];
char a[200002];
bool c[200002];
int d[200002];
bool mids(int mi)
{
	CLR(c,false);
	for(int i=1;i<=mi;i++)
	{
		c[d[i]]=true;
	}
		
	for(int i=1,j=1;i<=r2;i++)
	{
		
		if((!c[i])&&(a[i]==b[j]))
		{
			++j;
			if(j>len2)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int len1;
	while(scanf("%s%s",a+1,b+1)!=EOF)
	{

		CLR(d,0);	
		r=strlen(a+1);
		for(int i=1;i<=r;i++)
			scanf("%d",&d[i]);
		
		len2=strlen(b+1);
		r2=r;

		l=0;

		while(l<=r)
		{
			if(mids(MID(l,r)))
			{
				l=MID(l,r)+1;
			}else{
				r=MID(l,r)-1;
			}
		}
		printf("%d\n",l-1);
	} 
}