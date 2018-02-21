#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e7+7;

int a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int maxn=-INF;
	long long k,n;
	int cnt,le;
	CLR(a, 0);
	cin>>n>>k;
	for (int i = 0 ; i < n ; i++) {
		scanf("%d", &a[i]);
		if (a[i] > maxn) maxn = a[i];
	}
	if (n <= k) {
		cout<<maxn<<endl;
		return 0;
	}
	cnt = n;
	
	for (int i = 0;i < n; i++) {
		if (i==0)
			le = 0;
		else if (a[i] != 0 && a[i] != maxn)
			le = 1; 
		else if (a[i] == maxn) {
			cout<<maxn<<endl;
			return 0;
		}
		for (int j = i + 1;a[j] != 0; j++) {
			if (a[i] > a[j]) {
				a[n] = a[j];
				a[j] = 0;
				++le;
				if (le == k) {
					printf("%d\n", a[i]);
					return 0;
				}
				++n;
			} else {
				a[n] = a[i];
				++n;
				break;
			}
		}
	}
}

