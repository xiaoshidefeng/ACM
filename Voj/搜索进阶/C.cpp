#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
struct nodes{
	int x, y;
};

vector<int> v[30];
int sx;

bool vis[30][30];
int counts = 0;

//stack<int> st;

vector<int> v_ans;

void dfs(int x, int step) {
	if (x == sx && step != 1) {
		if (step < 20) return ;
		
		else {
//			v_ans[20] = 5;
			printf("%d:  ", ++counts);
			for (int i = 0; i < 20; i ++) {
				printf("%d ", v_ans[i]);
			}
			printf("%d\n", sx);
			
		}
	} 
	if (step > 20) return;
	++step;
	for (int i = 0; i < 3; i++) {
		if (vis[x][v[x][i]] || vis[v[x][i]][x]) continue;
		vis[x][v[x][i]] = 1;
		vis[v[x][i]][x] = 1;
		v_ans.push_back(v[x][i]);
		dfs(v[x][i], step);
		v_ans.erase(v_ans.begin() + v_ans.size() - 1);
		vis[x][v[x][i]] = 0;
		vis[v[x][i]][x] = 0;
	}
	--step;
}

int main()
{
//	freopen("f:/input.txt", "r", stdin);
	int n, m , k;
	while(scanf("%d", &n) != EOF) {
		if (n == 0) break;
		scanf("%d%d", &m, &k);
		int cnt = 1;
		for (int i = 0; i <= 20; i++) v[i].clear();
//		v.clear();
		v[cnt].push_back(n);
		v[cnt].push_back(m);
		v[cnt].push_back(k);
		sort(v[cnt].begin(), v[cnt].begin() + 3);
		for (int i = 2; i <= 20; i ++) {
			scanf("%d%d%d", &n, &m, &k);
			v[++cnt].push_back(n);
			v[cnt].push_back(m);
			v[cnt].push_back(k);
			sort(v[cnt].begin(), v[cnt].begin() + 3);
		}
		counts = 0;
		CLR(vis, 0);
		v_ans.clear();
		scanf("%d", &sx);
		v_ans.push_back(sx);
		dfs(sx, 1);
	}
}

