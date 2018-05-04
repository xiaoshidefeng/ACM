#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char mp[200][200];

int vis[4];

void check(char c) {
	if (c == 'R') ++vis[1];
	else if (c == 'G') ++vis[2];
	else if (c == 'B') ++vis[3]; 
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , m;
	cin>>n>>m;
	int i , j , k;
	CLR(vis, 0);
	for (i = 0; i < n; i ++) scanf("%s", mp[i]);
	
	int f = 0;
	for (i = 0 ; i < n ; i++) {
		bool isok = 0;
		for (j = 1; j < m; j ++) {
			if (mp[i][j] != mp[i][0]) {
				isok = 1;
				break;
			}
		}
		if (isok) {
			CLR(vis, 0);
			f = 1;
			break;	
		}
		check(mp[i][0]);
		
	}
	if (!f)
		if (vis[1] == vis[2] && vis[2] == vis[3] && vis[1] > 0) {
			cout<<"YES\n";
			return 0;
		}
	f = 0;
	for (i = 0 ; i < m ; i++) {
		bool isok = 0;
		for (j = 1; j < n; j ++) {
			if (mp[j][i] != mp[0][i]) {
				isok = 1;
				break;
			}
		}
		if (isok) {
			CLR(vis, 0);
			f = 1;
			break;	
		}
		check(mp[0][i]);
		
	}
	if (!f) {
		if (vis[1] == vis[2] && vis[2] == vis[3] && vis[1] > 0) {
			cout<<"YES\n";
			return 0;
		}
	}
	
	cout<<"NO\n";
//	if (f) {
//		
//	} else {
//		if (vis)
//	}
}

