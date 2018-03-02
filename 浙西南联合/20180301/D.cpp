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
	int n;
	cin>>n;
	for ( int i = 1 ; i <= n ; i++) {
		if (i % 4 == 1) {
			printf("b");
		} else if (i % 4 == 0) {
			printf("a");
		} else if ( i % 2 == 0) {
			printf("b");
		} else {
			printf("a");
		}
	}
}


