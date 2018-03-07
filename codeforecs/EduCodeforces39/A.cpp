#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int c[999], a[999], b[999];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,mi = 0,ma = 0,x;
	cin>>n;
	for (int i = 0 ; i < n ; i++) {
		cin>>x;
		if (x < 0) {
			mi += x;
		} else {
			ma += x;
		}
	}
	cout<<ma - mi <<endl;
}

