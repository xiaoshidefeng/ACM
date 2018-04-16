#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const __int64 N=1e18;

__int64 f[1000000+10];

int main()
{
	__int64 n;
	f[1] = 2;
	f[2] = 3;
	for(__int64 i=3;;i++) {
		f[i] = f[i-1] + f[i-2];
		if(f[i] > N) break;
	}
	cin>>n;
	__int64 i;
	for(i=1;;i++) {
		if(f[i] > n) break;
	}
	cout<<i-1<<endl;
}

