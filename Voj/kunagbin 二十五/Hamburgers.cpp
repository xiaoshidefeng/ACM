#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

__int64 a, b, c;
__int64 d, e, f;
__int64 pri;
char ch[1000];
__int64 na, nb, nc;
__int64 sum;
bool check(__int64 m) {
	__int64 x = m * d * na;
	__int64 y = m * e * nb;
	__int64 z = m * f * nc;
	x -= (a * d);
	y -= (b * e);
	z -= (c * f);
	if (x < 0) x = 0;
	if (y < 0) y = 0;
	if (z < 0) z = 0;
	sum = x + y + z;
//	cout<<sum<<endl;
	if (pri < sum) return 0;
	else return 1;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	cin>>ch;
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	cin>>pri;
	na = nb = nc;
	int le = strlen(ch);
	for (int i = 0 ; i < le; i ++) {
		if (ch[i] == 'B') ++na;
		else if (ch[i] == 'S') ++nb;
		else if (ch[i] == 'C') ++nc;
	}
	__int64 l = 1, mid, r = 2000000000000;
	
	while(l < r) {
		mid = (l + r) >> 1;
		if (check(mid)) {
			l = mid + 1;
		} else {
			r = mid;
		}
	}
	cout<<l - 1<<endl;
}

