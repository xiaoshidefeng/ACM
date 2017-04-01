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

int a[200001];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,len1;
	int maxx;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	//	sort(a,a+n);
		j=1;
		set<int>s;
		s.insert(a[0]);
		for(i=1;i<n;i++)
		{
			if(s.find(a[i])!=s.end())
			{
				s.clear();
				s.insert(a[i]);
				++j;
				//printf("%d %d\n",j,a[i]);
				
			}else{
				s.insert(a[i]);
			}	
		}
		printf("%d\n",j);
	}
}