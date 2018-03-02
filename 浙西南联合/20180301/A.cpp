#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
char c[1000][1000];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i , j ,k;
	cin>>n;
	for (i = 0 ; i < n ; i++) scanf("%s", c[i]);
	
	char a = c[0][0], b = c[0][1];
	if ( a == b) {
		cout<<"NO"<<endl;
		return 0;
	}
	
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n; j ++) {
			if (j == i || j == n - i - 1) {
				if (a != c[i][j]) {
					cout<<"NO"<<endl;
					return 0;
				}
				continue;
			}
			
			if (c[i][j] != b) {
				cout<<"NO"<<endl;
				return 0;
			}
			
		}
	}
	cout<<"YES"<<endl; 
}

