#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N], b[N], c[N];
int n, i , j, k, mi = INF, ma = -INF, ax , bx , cx;

void cop() {
	for (i = 0;i < n ; i++) {
		b[i] = c[i] = a[i];
	}
}

void check() {
	int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 , c2, aa = 0, bb = 0, cc = 0;
	for (i = 0; i < n ; i++) {
		if (b[i] == ax) {
			++a1;
		}
		if (c[i] == ax) {
			++a2;
		}
		if (b[i] == bx) {
			++b1;
		}
		if (c[i] == bx) {
			++b2;
		}
		 if (a[i] == ax) {
			++aa;
		} 
		if (a[i] == bx) {
			++bb;
		}
	}
	c1 = n - a1 - b1;
	c2 = n - a2 - b2;
	cc = n - aa - bb;
	int a11 = 0, a22 = 0, b11 = 0, b22 = 0, c11 = 0, c22 = 0;
	if (aa >= a1) {
		a11 += a1;
	} else {
		a11 += aa;
	}
	if (bb >= b1) {
		b11 += b1;
	} else {
		b11 += bb;
	}
	if (cc >= c1) {
		c11 += c1;
	} else {
		c11 += cc;
	}
	
	if (aa >= a2) {
		a22 += a2;
	} else {
		a22 += aa;
	}
	if (bb >= b2) {
		b22 += b2;
	} else {
		b22 += bb;
	}
	if (cc >= c2) {
		c22 += c2;
	} else {
		c22 += cc;
	}
	
	
	
	if (a11 + b11 + c11 >= a22 + b22 + c22) {
		cout<<(a22 + b22 + c22)<<endl;
		cout<<c[0];
		for (i = 1; i < n ; i ++) {
			cout<<" "<<c[i];
		}
		cout<<endl;
	} else {
		cout<<(a11 + b11 + c11)<<endl;
		cout<<b[0];
		for (i = 1; i < n ; i ++) {
			cout<<" "<<b[i];
		}
		cout<<endl;
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	FAST_IO
	
	cin>>n;
	for (i = 0; i < n ; i++) {
		cin>>a[i];
		if (a[i] > ma) {
			ma = a[i];
		} 
		if (a[i] < mi) {
			mi = a[i];
		}
		
	}
	if (n == 1) {
		
		cout <<"1\n"<< a[0] <<endl;
		return 0;
	}
	int su = ma - mi;
	if (su == 0 || su == 1) {
		cout << n<<endl;
//		for (i = 0 ; i < n - 1 ; i++) {
//			if (a[i] != a[i + 1]) {
//				swap(a[i], a[i + 1]);
//				break;
//				
//			}
//			
//		}
		cout<<a[0];
		for (i = 1; i < n; i++) {
			cout<<" "<<a[i];
		}
		cout<<endl;
	} else if (su == 2) {
		sort(a, a + n);
		cop();
		ax = a[0];
		bx = ax + 1;
		cx = ax + 2;
//		for ( i = 1 ; i < n ;i ++) {
//			if (a[i] != ax && ax == bx) {
//				bx = a[i];
//				break;
//			} 
//		}
		
		for (i = 0 ; i < n; i++) {
			if ((b[n - i - 1] - 2) == b[i]) {
				b[i] += 1;
				b[n - i - 1] -= 1;
			} else { 
				break;
			}
		}
		for (i = 0; i < n; i ++) {
			if (c[i] == c[i + 1] && c[i] == bx) {
				c[i] -= 1;
				c[i + 1] += 1;
			}
		}
		check();
	}
	
	
}

