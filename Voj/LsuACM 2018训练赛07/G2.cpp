#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=3e5+7;

struct nodes{
	int x,y;
};

vector<nodes> v;

int a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int cnt = 0;
	int i , j , k, n , m;
	scanf("%d%d", &n,&m);
	int count = 1, count2 = 0;
	
	if (m == 2) {
		printf("%d\n", n - 1);
		for (i = 1; i < n ; i ++) {
			printf("%d %d\n", i , i + 1);
			
		}
		return 0;
	}
	
	for (i = 1; i <= m ; i ++) {
		nodes ns ;
		ns.x = 1;
		ns.y = i + 1;
		v.push_back(ns);
		a[i] = i + 1;
	}
	for (i = m + 2; i <= n; i ++) {
		for (j = 1, count2 = 0; j <= m; j ++) {
			nodes ns;
			ns.x = a[j];
			ns.y = i;
			v.push_back(ns);
			
			++count2; 
			a[j] = i;
			if (i == n || j == m) break;
			++i;
		}
		++count;
//		--i;
	}
	if (count2 >= 2 || count2 == 0) count = count * 2;
	else {
		count = count * 2 - 1;
	}
	printf("%d\n", count);
	long long si = v.size();
//	cout<<si << " size"<<endl;
	for (i = 0 ; i < si; i ++) printf("%d %d\n", v[i].x, v[i].y); 
	
}

