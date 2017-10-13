#include<bits/stdc++.h>
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
	int a,b,i,j,k,n,cnt;
	scanf("%d", &k);
	while(k--) {
		scanf("%d", &n);
		cnt=0;
		while(n--) {
			scanf("%d%d", &a, &b);
			cnt+=(a * b);
		}
		printf("%d\n", cnt);
	} 
}

