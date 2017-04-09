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
const int N=1e6+7;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int x,y,a,b,zu,i,j,k,sum,t1,t2,f,t3;
	scanf("%d",&zu);
	while(zu--)
	{
		sum=0;
		scanf("%d%d%d%d",&x,&y,&a,&b);
		if(x==1||y==1||(x==2&&y==2&&a<=2&&b==2)||(x==2&&y==2&&b<=2&&a==2))
		{
			printf("INF\n");
			continue;
		}

		while(a>=x||b>=y)
		{
				t1=a/x;
				sum+=t1;
				a=(a%x)+t1;
				b+=t1;

				t2=b/y;
				sum+=t2;
				b=(b%y)+t2;
				a+=t2;		
		}

		printf("%d\n",sum);
		
		
		
	}
}