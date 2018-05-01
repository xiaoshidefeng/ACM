#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[N][21];
int a[N];



vector<int > v[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i, j ,n , m , k;
	cin>>n>>k>>m;
	for (i = 1 ; i <= n ; i++) {
		scanf("%s", c[i]);
	}
	for (i = 1 ; i <= n ; i++) {
		scanf("%d", &a[i]);
	}
	int t, nt;
	for (i = 0; i < k ; i++) {
		int minx = INF;
		scanf("%d", &nt);
		for (j = 0 ; j < nt; j ++) {
			scanf("%d", &t);
			if (a[t] < minx) minx = a[t];
			v[i].push_back(t);
		}
		for (j = 0 ; j < nt; j ++) {
//			v[i][j].second = minx;
			a[v[i][j]] = minx;
		}
	}
	char temp[21];
	int cnt = 0;
	__int64 sum = 0;
	for (i = 1; i <= m; i ++) {
		scanf("%s", temp);
		for (j = 1; j <= n; j ++) {
			if (strcmp(temp, c[j]) == 0) {
				cnt = j;
				break;
			}
		}
		sum += a[cnt];
//		bool f = 0;
//		for (j = 0; j < k; j ++) {
//			int vs = v[j].size();
//			for (int x = 0; x < vs; x++) {
//				if (v[j][x].first == cnt) {
//					f = 1;
//					sum += v[j][x].second;
//					break;
//				}
//			}
//			if (f)
//			break;
//		}
		
		
	}
	printf("%I64d\n", sum);
}

