#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int m[N]; 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , a, b, c, t, i;
	cin>>n>>a>>b>>c>>t;
	for (i = 0; i < n ; i ++) {
		scanf("%d", &m[i]);
	}
	if (b >= c) {
//		for (i = 0; i < n ; i ++) {
//			if (a[i] <= t) ++cnt;
//		}
		cout<<a * n<<endl;
	} else {
		int sum = 0;
		for (i = 0; i < n ; i ++) {
			sum += (t - m[i]);
		}
		cout<<sum * (c - b) + a * n<<endl;
	}
}

