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
set<int>s;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,k2,n,wei,maxss,x;
	while(scanf("%d",&k)!=EOF)
	{
		maxss=0;
		k2=k*2;
		for(i=0;i<k2;i++)
		{
			scanf("%d",&n);
			if(!s.empty())
			{
				if(s.find(n)!=s.end())
				{
					s.erase(n);
				 	//s.clear();
				}else{
					s.insert(n);
				}
			}else{
				s.insert(n);
			}
				//printf("%d\n",s.size());
			x=s.size();
			if(x>maxss)
				maxss=x;
		}
		printf("%d\n",maxss);
	}
}