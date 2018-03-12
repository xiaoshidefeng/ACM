#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N];

int main()
{
	int n, i, j , k = 2, k2 = 1;
	cin>>n;
	a[0] = 1;
	for (i = 1; i < 10000; i ++) {
		a[i] = (k - 1)* k2;
		if (a[i] > n) {
			cout<<a[i - 1] <<"\n" <<endl;
			return 0;
		}
		k *= 2;
		k2 *= 2;
		
		
//		a[i] = a[i - 1] * 4 + k;
//		if (a[i] > n) {
//			cout<<a[i - 1] << "\n" <<endl;
//			return 0;
//		}
//		k *= 2;
	}
	
	
	
	
}
	

