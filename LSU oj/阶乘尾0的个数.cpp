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
	int a,b,i,k;
	while(scanf("%d",&a)!=EOF)
	{
		for(i=5,b=0;i<=a;i++)
		{
			if(i%5==0)
			{
				k=i;
				while(!(k%5))
				{
					++b;
					k/=5;
				}	
				
			}
		}
		printf("%d\n",b);
		
	}
}