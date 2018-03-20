#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

struct pp {
	int x, y;
};

vector<pp> a;
pp ps[999];
bool vis[999];
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , m , i , j, k, cnt = 1,count = 0;
	pp p;
	cin>>n;
	for (i = 0; i < n ; i ++) {
		scanf("%d%d", &ps[i].x, &ps[i].y);
	}
	CLR(vis, 0);
	a.push_back(ps[0]);
	k = 1;
	vis[0] = 1;
	while (cnt != n) {
		for (i = 1; i < n; i++) {
			for (int x = 0 ; x < a.size(); x ++) {
				if (vis[i]) continue;
				pp ap = a[x];
				
				if (ap.x == ps[i].x || ap.y == ps[i].y) {
					a.push_back(ps[i]);
					vis[i] = 1;
					++cnt;
					break;
				}
			}
		}
		if (k == a.size()) {
			a.clear();
			for (i = 0; i < n; i ++) {
				if (!vis[i]) {
					a.push_back(ps[i]);
					vis[i] = 1;
					++count;
					++cnt;
					k = 1;
					break;
				}
			}
			continue;
		}
		k = a.size();
		
	}
	cout<<count<<endl;

}

