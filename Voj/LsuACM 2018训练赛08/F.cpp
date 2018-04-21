#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

vector<int> v[N];
int vis[N];
int zhuo[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i , j , k, a, b;
	scanf("%d", &zu);
	while(zu--) {
		int n, m, p;
		CLR(vis, 0);
		scanf("%d%d%d", &n, &m, &p);
		for (i = 1 ; i <= n; i ++) {
			scanf("%d", &zhuo[i]);
		}
		
		for (i = 0;i < p; i ++) {
			scanf("%d%d", &a, &b);
			v[a].push_back(b);
//			++vis[a];
		}
		__int64 maxn = -INF, maxni = -INF;
		__int64 sum = 0;
		int now = 1, nowi = 0;
		for (i = 1 ; i <= n ; i++) {
			
			int size = v[i].size();
			for (j = 0 ; j < size; j ++) {
				if (v[i][j] <= m) v[i][j] += (zhuo[i] - 1);
				sum += (m - (v[i][j] % m));
//				sum += nowi;
			}
			cout<<sum<<endl;
		}
		for (i = now; i <= n; i ++) {
			
		}
		
	}
}

