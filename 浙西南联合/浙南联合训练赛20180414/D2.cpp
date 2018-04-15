#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i , j;
	scanf("%d", &n);
	scanf("%s", a);
	int bb, rr, br, rb;
	bb = rr = br = rb =0;
	
	int b1,b2,r1, r2;
	b1 = r1 = b2 = r2 =0;
	for (i = 0 ; i < n; i ++) {
		if (a[i] == 'b') {
			if (i % 2 == 0) {
				++b2;
			} else {
				++b1;
			}
		} else {
			if (i % 2 == 0) {
				++r2;
			} else {
				++r1;
			}
		}
	}
	int minb = max(b1, r2);
	int minr = max(b2, r1);
	cout<<min(minb,minr)<<endl;
}

