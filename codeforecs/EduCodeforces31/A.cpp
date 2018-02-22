#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e6+7;

int a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, t, i;
	cin>>n>>t;
	for (i = 0 ; i < n ; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0 ; i < n ; i++) {
		if (86400 - a[i] >= t) {
			cout<<i + 1<<endl;
			return 0;
		}
		t -= (86400 - a[i]);
	}
}

