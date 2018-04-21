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
	int n, m, i ,j ,zu , k;
	scanf("%d", &zu);
	while(zu -- ) {
		scanf("%d%d", &n, &m);
		scanf("%s", a);
		int cnt = 0, cnt2 = 0;
		for (i = m - 1; i < n; i ++) {
			if (i == n - 1) {
				break;
			}
			if (a[i] == 'L') ++cnt;
		}
		for (i = m - 1; i >= 0 ; i--) {
			if (i == 0) {
				break;
			}
			if (a[i] == 'R') ++cnt2;
		}
//		if (cnt > 0 || cnt2 > 0)
//		cout<<min(cnt, cnt2) - 1<<endl;
//		else 
		cout<<min(cnt, cnt2)<<endl;
	}
}


