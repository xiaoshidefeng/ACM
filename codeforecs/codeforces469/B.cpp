#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int n,m,i,j,k, l ,r, sum;

int a[N], b[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	cin>>n>>m;
	int cnt = 0;
	for (i = 0; i < n; i ++)  {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < m; i ++)  {
		scanf("%d", &b[i]);
	}
	if (n == 1 || m == 1) {
		cout <<1<<endl;
		return 0;
	}
	
	sum = a[0];
	l = sum;
	r = 0;
	j = 0;
	int f = 0;
	i = 0;
	
	while (i < n || j < m) {
		while ( l < r) {
			++i;
			l += a[i];
		}
		
		while ( r < l) {
			
			r += b[j];
			++j;
		}
		
		if (l == r) {
			++cnt;
			r = 0;
			l = a[++i]; 
			if (i == n) break; 
		} 
	}
	
	cout <<cnt<<endl;
}
 
