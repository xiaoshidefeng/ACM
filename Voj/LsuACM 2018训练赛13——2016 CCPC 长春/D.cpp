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
	int T;
	cin>>T;
	int cnt=1;
	
	int a[22]={0,
				0,0,1,1,1,1,3,}
	
	
	while(T--){
		int n;
		cin>>n;
		int ans=0;
		if(n==1 || n==2){
			printf("Case #%d: %d\n",cnt++,ans);
			continue;
		}
		ans = n/3;
		if(n>6) ans+=n%3;
		printf("Case #%d: %d\n",cnt++,ans);
	}
}

