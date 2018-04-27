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
	int n , i , j , k, r, l, r1, l1;
	cin>>n;
	if (n % 2 == 0) {
		r = n/2 - 1 ;
		l = n/2 + 1;
	} else {
		r = n/2;
		l = n/2 + 1;
	}
	r1 = r;
	l1 = l;
	while (1) {
		while(l1 % r1 != 0) {
			int t = l1 % r1;
			l1 = r1;
			r1 = t;
		}
		if (r1 == 1) {
			cout<<r<<" "<<l<<endl;
			break;
		} else {
			--r;
			++l;
			r1 = r;
			l1 = l;
		}
	}
}

