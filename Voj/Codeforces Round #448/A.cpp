#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[999];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , i , j , k;
	cin>>n;
	for (i = 0; i < n ; i ++) {
		
		scanf("%d", &a[i]);
		a[i + n] = a[i];
	}
	if (n == 1) {
		cout<<a[0]<<endl;
		return 0;
	}
	
	int l = 0, r = 0;
//	sort(a, a + n);
	
	l = 0;
	r = 0;
	int sum = 0;
	int cn = INF;
	for (; r < 2*n ; ) {
		
		if (sum < 180) {
			sum += a[r++];
		} else {
			sum -= a[l++];
		}
		if (180 - sum >= 0 && 180 - sum < cn) cn = 180 - sum;
//		if (r - l >= n) {
//			
//		}
	} 
//	if (l > r)
//	cout<<l - r<<endl;
	cout<<(cn) * 2<<endl;
	
}

