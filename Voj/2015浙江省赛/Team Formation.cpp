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
int a[100002];
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,cnt,x;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		cnt=0;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				`
				x=(a[i]|a[j]);
				
				if(x>a[i]&&x>a[j])
				{
					++cnt; 
					//printf("%d %d %d\n",x,a[i],a[j]);
				}
			}
		}
		printf("%d\n",cnt);
	}
	//int c = 2|3;
	
	//cout<<c<<endl;
}