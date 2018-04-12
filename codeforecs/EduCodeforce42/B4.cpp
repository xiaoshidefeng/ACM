#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, a, b, cnt = 0;;
	cin>>n>>a>>b>>c;
	for (int i = 0 ; i < n; i++) {
		if (c[i] == '.') {
			if ((a > b && c[i - 1] != 'A') ||  c[i - 1] == 'B' && a > 0) {
				c[i] = 'A';
				--a;
				++cnt;
			} else if ((a <= b && c[i - 1] != 'B' && b != 0) || c[i - 1] == 'A' && b > 0) {
				c[i] = 'B';
				--b;
				++cnt;
			}
		} 
	}
	cout<<cnt<<endl;
}

