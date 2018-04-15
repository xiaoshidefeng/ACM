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
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n ,m , i;
	cin>>n>>m;
	for (i = 0;  i < n; i ++) {
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	for (i = 0; i < n; i ++) {
		if (a[i] - 3 * m >=0) {
			a[i] = a[i] - 3 * m;
		} else if (a[i] - 2 * m >= 0) {
			a[i] = a[i] - 2 * m;
		} else if (a[i] - m >= 0) {
			a[i] = a[i] - m;
		}
		cnt += a[i];
	}
	cout<<cnt<<endl;
}

