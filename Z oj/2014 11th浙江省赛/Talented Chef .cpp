#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
//const int N=2e5+7;
int a[40001];
bool cmp(const int &a,const int &b)
{
	return a>b;
}
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,sum;
	scanf("%d",&zu);
	while(zu--)
	{
		CLR(a,0);
		sum=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		sort(a,a+n,cmp);
		if((sum/m)>=a[0])
		{
			if((sum/m*m)!=sum)
			{
				printf("%d\n",sum/m+1);
			}else{
				printf("%d\n",sum/m);
			}
		}
		else{
			printf("%d\n",a[0]);
		}
	}
}
