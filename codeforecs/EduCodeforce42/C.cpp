#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
int le,i, j ,k, e;
char c[100];

void dfs(int x, int val, int step) {
	int b = c[x] - '0';
	if (x == le - 1) {
		//×ßµ½µ×
		int c = sqrt(val);
		if (c * c == val && val != 0) {
			e = min(step + 1, e);
		} 
		val = val*10 + b;
		c = sqrt(val);
		if (c * c == val && val != 0) {
			e = min(step, e);
		} 
		
		return ;
	}
	if (b != 0 || val != 0) {
		dfs(x + 1, val * 10 + b, step);
	}
	dfs(x + 1, val, step + 1);
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	cin>>c;
	le = strlen(c);
	e = INF;
	dfs(0, 0, 0);
	if (e == INF) {
		cout<<-1<<endl;
		return 0;
	}
	cout<<e<<endl;
}

