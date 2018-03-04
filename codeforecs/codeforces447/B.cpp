#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const __int64 N=1e9+7;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	__int64 n, m , k;
	cin>>n>>m>>k;
	if (k == -1 && ((n % 2 != m %2))) {
		cout<<0<<endl;
		
	} else {
		__int64 x = pow(pow(2, n -1) % N, m - 1) % N; 
		cout<<x<<endl; 
	}
}

