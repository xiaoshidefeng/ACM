#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

set<int> ca;
set<int> c;
int a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i;
	cin>>n;
	for (i = 0 ; i < n ; i ++) {
		scanf("%d", &a[i]);
		c.insert(a[i]);
	}
	int cnt = 0, le = c.size();
	for (i = n - 1 ; i >= 0 ; i --) {
		if (ca.find(a[i]) == ca.end() && ca.size() == le - 1) {
			cout<<a[i]<<endl;
			return 0;
		} else  {
			ca.insert(a[i]);
		}
		
	}
	cout<<n<<endl;
}

