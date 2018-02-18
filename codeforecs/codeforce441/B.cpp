#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=1e5+7;
int a[N];
int q[N];
set<int> si;

void outAns(int j, int maxi, int ke, int x) {
	
	printf("Yes\n%d", a[j]);
	int cnt = 1;
	for(int i = j + 1; i < maxi && cnt <x; i++) {
		if (q[i] == ke) {
			
			++cnt;
			printf(" %d", a[i]);	
		}

	}
	printf ("\n");
	return ;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int b,c,d,i,j,k,m,n;
	cin>>n>>k>>m;
	//CLR(a);
	for (i = 0 ; i < n; i++) {
		scanf("%d", &a[i]);
		q[i] = a[i]%m;
	}
	
	int cnt=0;
	for (i = 0 ; i < n; i++) {
		if(si.find(q[i]) == si.end()) {
			cnt = 1;
			for(j = i + 1; j < n && cnt < k && n-j + 1>k-cnt; j++) {
				if (q[j] == q[i]) ++cnt;
			}
			if (cnt >= k) {
				outAns(i, n, q[i], k);
				return 0;
			}
			si.insert(q[i]);
		}
	}
	printf ("No\n");
}

