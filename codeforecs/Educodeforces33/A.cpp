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
	int n, i , j, k;
	int a[1000];
	cin>>n;
	for (i = 0 ; i < n ; i ++) {
		cin>>a[i];
	}
	k = 3;
	for (i = 0 ; i < n ; i ++) {
		if (a[i] != k) {
			if (a[i] + k == 3) {
				k = 3;
			} else if (a[i] + k == 4) {
				k = 2;
			} else if (a[i] + k == 5) {
				k = 1;
			}
		} else {
			cout<<"NO\n"<<endl;
			return 0;
		}
	}
	cout<<"YES\n"<<endl;
	
}


