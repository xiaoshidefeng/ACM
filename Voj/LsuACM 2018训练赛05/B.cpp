#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e6+7;

double a[N], b[N], mp[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, m,sum, i, j;
	cin>>sum>>n>>m;
	for (i = 0; i < sum; i ++) {
		cin>>mp[i];
	}
	if (n > m) {
		int t = n;
		n = m;
		m = t;
	}
	sort(mp, mp + sum);
	__int64 sum1 = 0;
	__int64 sum2 = 0;
	int cnt = 0;
	for (i = sum - 1; i >= 0 ; i --) {
		a[cnt] = mp[i];
		sum1 += a[cnt];
		++cnt;
		if (cnt == n) break;
	}
	int cnt2 = 0;
	for (i = sum - cnt - 1; i >=0 ; i --) {
		b[cnt2] = mp[i];
		sum2 += b[cnt2];
		++cnt2;
		if (cnt2 == m) break;
	}
	printf("%.8lf\n", (double)sum1 / cnt + (double)sum2 / cnt2);
//	cout<< (double)sum1 / cnt + (double)sum2 / cnt2<<endl;
}

