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
	__int64 n;
	cin>>n;
	if (n == 2) {
		cout<<1<<endl;
		return 0;
	}
	if (n == 3) {
		cout<<1<<endl;
		return 0;
	}
	if (n % 2 == 0) {
		cout<<2<<endl;
		return 0;
	} else {
		__int64 m = sqrt(n);
		int f = 0;
		for (__int64 i = 3; i <= m + 1; i ++) {
			if (n % i == 0) {
				f = 1;
				break;
			}
		} 
		if (f == 1) {
			n = n - 2;
			for (__int64 i = 3; i <= m + 1; i ++) {
				if (n % i == 0) {
					cout<<3<<endl;
					return 0;
				}
			} 
			cout<<2<<endl;
			return 0;
		}
		cout<<1<<endl;
		
	}
}

