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
	int r, l, a, x;
	cin>>l>>r>>a;
	x = l - r;
	if (x < 0 ) x = -x;
	if (l >= r) {
		if (a - x <= 0) {
			cout<< (r + a) * 2 <<endl;
			return 0;
		} else {
			cout<<(a + l + r)/2*2<<endl;
			return 0;
		}
	} else {
		if (a - x <= 0) {
			cout<< (l + a) * 2 <<endl;
			return 0;
		} else {
			
			cout<<(a + l + r)/2*2<<endl;
			return 0;
		}
	}
}

