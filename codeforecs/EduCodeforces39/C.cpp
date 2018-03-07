#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[N];

int main()
{
	FAST_IO
	//freopen("f:/input.txt", "r", stdin);
	int n,i, j,k;
	
	cin>>c;
	n = strlen(c);
	for (i = 0 ; i < n ; i++) {
		if (c[i] != 'z') {
			c[i] = c[i] + 1;
		} 
	}
	int x= 0, f = 0;
	for (i = 1;i < n ; i++) {
		if (x == 25) x = 0;
		if (c[i] - c[i] == 1) ++x;
		else if (x != 25) f= 1;
	}
	if (f) cout<<-1<<endl;
	else cout<<c<<endl;
}

