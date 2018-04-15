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
	
	for (i = 0 ; i < n; i ++) {
		if (a[i] == 'b') {
			if (a[i + 1] == 'r') {
				++br;
			} else if (a[i + 1] == 'b') {
				++bb;
			}
			++i;
			
		} else if (a[i] == 'r') {
			if (a[i + 1] == 'r') {
				++rr;
			} else if (a[i + 1] == 'b') {
				++rb;
			}
			++i;
		}
	}
	int cnt = 0;
	if (rr > bb) {
		cnt += rr;
	} else {
		cnt += bb;
	}
	
	if (rb < br) {
		if (a[n - 1] == 'r') {
			cout<<1 + rb + cnt<<endl;
		} else {
			cout<<rb + cnt<<endl;
		}
	} else if (rb > br) {
		if (a[n - 1] == 'b') {
			cout<<1 + br + cnt<<endl;
		} else {
			cout<<br + cnt<<endl;
		}
	} else {
		cout<<br + cnt<<endl;
	}
}

