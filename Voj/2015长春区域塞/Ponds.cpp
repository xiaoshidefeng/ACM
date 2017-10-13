#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

long long val[11111], vis[11111], indir[11111],p,m;
vector<long long> G[N];

long long bfs(long long i) {
	queue<long long> q;
	q.push(i);
	vis[i] = 1;
	int cnt = 0;
	long long sum = val[i];
	while(!q.empty()) {
		int f = q.front();
		q.pop();
		++cnt; 
		for(int i = 0; i < G[f].size(); i++) {
			int x = G[f][i];
			if(!vis[x] && indir[x] > 1) {
				vis[x] = 1;
				sum += val[x];
				q.push(x);
				
			}
		}
	}
	//判断是否能构成奇数环 
	if(cnt > 2 && cnt % 2 == 1) {
		return sum;
	} else {
		return 0;
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,n,i,k,j;
	int a,b;
	scanf("%d", &zu);
	while(zu--) {
		CLR(vis, 0);
		CLR(val, 0);
		CLR(indir, 0);

		scanf("%lld%lld", &p, &m);
		for(i = 1; i <= p; i++) {
			scanf("%lld", &val[i]);
		}
		for(i = 1; i <= p; i++) {
			G[i].clear();
		}
		for(i = 1; i <= m; i++) {
			scanf("%d%d", &a,&b);
			G[a].push_back(b);
			G[b].push_back(a);
			++indir[a];
			++indir[b]; 
		}
		
		//去除边
		for(i = 1; i <= p; i++) {
			for(j = 1; j <= p; j++) {
				if(indir[i] == 0 || indir[j] == 1) {
					break;
				}
			}
			if(j > p) {
				break;
			}
			
			indir[j] = -1; 
			
			for(k = 0; k < G[j].size(); k++) {
				--indir[G[j][k]];
			} 
		}
		
		long long ans = 0;
		for(i = 1; i <= p; i++) {
			if(!vis[i] && indir[i] > 1) {
				ans += bfs(i);
			}
		}
		
		printf("%lld\n", ans);
		
	}
}


