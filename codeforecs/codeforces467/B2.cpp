#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
int n, a, b, i , j , k, x, n1;
bool vis[300];
int s[999];
bool checks() {
	for (i = 1; i < n1;i = i + 2 ) {
		if (s[i] == a && s[i + 1] == b) {
			return true;
		}
	}
	return false;
} 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	
	cin>>n>>a>>b;
	for (i = 1; i <= n; i++) {
		s[i] = i;
	}
	 n1 = n;
	 	if (a > b) {
		int t = b;
		b = a;
		a = t;
	}
	for (j = 1; j <= n; j++) {
		
		if (checks()) {
			int cnt = 1;
			n /=2;
			while(n >= 2) {
				
				n/=2;
				++cnt;
			}
			if (j != cnt) 
			cout<<j<<endl;
			else {
				cout<<"Final!"<<endl;
			}
			return 0;
		}
		CLR(vis, 0);
		for (i = 2; i <= n1; i = i + 2 ) {
			if (s[i] == a) {
				vis[i - 1] = 1;
			} else if (s[i] == b) {
				vis[i - 1] = 1;
			} else {
				vis[i] = 1;
			}
		}
		for (i = 1, k = 1; i <= n1; i ++) {
			if (!vis[i]) {
				s[k] = s[i];
				++k;
			}
		}
		n1 = k;
	}

	
}

