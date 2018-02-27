#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c1[222], c2[222];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , i , j, x , y;
	cin>>n;
	scanf("%s", c1);
	int l = 0 , r = 0, u = 0, d = 0;
	for (i = 0; i < n ; i ++) {
		if (c1[i] == 'L') ++l;
		else if (c1[i] == 'R') ++r;
		else if (c1[i] == 'U') ++u;
		else if (c1[i] == 'D') ++d; 
	}
	cout << min(l, r) * 2 + min(u, d) * 2 << endl;
}

