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
	int i, j, k, n, a, b, c;
	
	cin>>a>>b;
	c = a - b;
	if (c < 0) c = -c;
	int sum = 0;
	if (c == 1) {
		cout<<1<<endl;
		return 0;
	}
	if (c % 2 == 0) {
		c /= 2;
		for (i = 1; i <= c; i ++) sum += i;
		sum *= 2;
	} else if (c % 2 == 1) {
		c /= 2;
		for (i = 1; i <= c; i ++) sum += i;
		sum *= 2;
		sum += (c + 1);
		
	}
	cout<<sum<<endl;
}

