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
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j,n,cunt1,cunt2;
	char c[1001],d[1001];
	int a[1001],b[1001];
	while(scanf("%d",&n)!=EOF)
	{
		cunt1=cunt2=0;
		scanf("%s",c);
		scanf("%s",d);
		for(i=0;i<n;i++)
		{
			a[i]=c[i]-'0';
			b[i]=d[i]-'0';
		}
		sort(a,a+n);
		sort(b,b+n);
		for(i=0,j=0;i<n&&j<n;i++)
		{
			while(j<n&&b[j]<=a[i])
				++j;
			if(j<n)
			{
				++cunt1;
				++j;
			}
			
		}
		//sort(b,b+n);
		for(i=0,j=0;i<n&&j<n;i++)
		{
			while(j<n&&a[j]<b[i])
				++j;
			if(j<n)
			{
				++cunt2;
				++j;
			}
			
		}
		
		printf("%d\n%d\n",n-cunt2,cunt1);
	}
}