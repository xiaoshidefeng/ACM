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
	__int64 a, b, c;
	cin >> a >> b;
	while (1) {
		if (a == 0 || b ==0) {
			cout << a << " " <<b <<endl;
			return 0;
		}
		c = 2 * b;
		if (a >= c) {
			a = a - c;
			continue;
		} 
		c = 2 * a;
		if (b >= c) {
			b = b - c;
		} else {
			break;
		}
	}
	
	cout << a << " " <<b <<endl;
	return 0;

	
}

