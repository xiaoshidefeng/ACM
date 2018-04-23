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
	int n;
	cin>>n;
	int q=0;
	while(n--){
		q++;
		int x;
		cin>>x;
		printf("Case #%d: %d\n",q,2*x-1);
	}
}

