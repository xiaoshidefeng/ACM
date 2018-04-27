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
	int n, m, k, sum;
	cin>>n>>m;
	k = n / 3;
	if (m > k) {
		sum = n - m;
	} else {
		sum = m * 2;
	}
	if (m == 0) {
		cout<<0<<" "<<0<<endl;
		return 0;
	}
	if (n <= m) {
		cout<<0<<" "<<0<<endl;
		return 0;
	}
	
	if (n != m)
	cout<<1<<" "<<sum<<endl;
	else {
		cout<<0<<" "<<0<<endl;
	}
}

