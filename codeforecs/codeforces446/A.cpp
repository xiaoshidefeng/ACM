#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

long long a[N], b[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n ,i , j , k;
	cin>>n;
	for (i = 0 ; i < n ; i ++) scanf("%lld", &a[i]);
	scanf("%lld%lld", &b[0], &b[1]);
	long long max1 = b[0], max2 = b[1], maxi1 = 0, maxi2 = 1, lef = a[0] + a[1];
	for (i = 2 ; i < n ; i ++) {
		scanf("%lld", &b[i]);
		long long t = b[i], le;
		if (t >= max1) {
			max2 = max1;
			maxi2 = maxi1;
			max1 = t;
			maxi1 = i;
			
		} else if (t > max2) {
			max2 = t;
			maxi2 = i;
		}
		
		lef += a[i];
		
	}
	

	
	if (lef > b[maxi1] + b[maxi2]) {
		cout<<"NO"<<endl;
	} else {
		cout<<"YES"<<endl;
	}
	
}

