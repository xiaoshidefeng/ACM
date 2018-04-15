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
	int i, j , k, cnt1 = 0, cnt2 = 0;
	int a, b , c, d;
	cin>>a>>b>>c>>d;
	cnt1 = a / c;
	cnt2 = b / d;
	if (cnt1 * c != a) {
		++cnt1;
	}
	if (cnt2 * d != b) {
		++cnt2;
	}
	if (a > b) {
		cout<<"First"<<endl;
	} else if (b >= a) {
		cout<<"Second"<<endl;
	}
}

