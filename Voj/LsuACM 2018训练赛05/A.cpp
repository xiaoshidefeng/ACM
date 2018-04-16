#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[999];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, m, k ,i, j,s, e;
	cin>>n>>k;
	cin>>c;
	for (i = 0; i < n ; i ++) {
		if (c[i] == 'G') s = i;
		if (c[i] == 'T') e = i;
	}
	int cnt;
	if (s > e) {
		cnt = s - e;
		for (i = e; i <= s; i = i + k) {
			if (c[i] == '#') {
				cout<<"NO"<<endl;
				return 0;
			}
		}
		if (cnt / k * k == cnt) {
			cout<<"YES"<<endl;
			return 0;
		} else {
			cout<<"NO"<<endl;
			return 0;
		}
	} else {
		cnt = e - s;
		for (i = s; i <= e; i = i + k) {
			if (c[i] == '#') {
				cout<<"NO"<<endl;
				return 0;
			}
		}
		if (cnt / k * k == cnt) {
			cout<<"YES"<<endl;
			return 0;
		} else {
			cout<<"NO"<<endl;
			return 0;
		}
	}
}

