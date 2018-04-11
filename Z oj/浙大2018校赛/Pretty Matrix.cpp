#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int mp[200][200];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i , j;
	cin>> n;
	while (n--) {
		int r, c, a, b;
		int cnt = 0;
		cin>>r>>c>>a>>b;
		for (i = 0 ; i < r; i ++) {
			for (j = 0 ; j < c; j ++) {
				cin>>mp[i][j];
				if (mp[i][j] >= a && mp[i][j] <= b) {
					++cnt;
				}
			}
		}

		if (a > b) {
			cout<<"No Solution"<<endl;
			continue;
		}
		cout<<r * c - cnt <<endl;
	} 
}

