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
	//freopen("f:/input.txt", "r", stdin);
	int n, i, j, k, cnt = 0;
	
	for (i = 0; i < 10; i++ ) {
		for (j = 0; j < 10; j++) {
			for (k = 0; k < 10; k ++) {
				if (j == 0 && i == 0) {
					c[cnt] = k + '0';
					++cnt;
				}
				if (i == 0 && j != 0) {
					c[cnt] = j + '0';
					++cnt;
					c[cnt] = k + '0';
					++cnt;
				}
				
				if (i != 0) {
					c[cnt] = i + '0';
					++cnt;
					c[cnt] = j + '0';
					++cnt;
					c[cnt] = k + '0';
					++cnt;
				}
				
			}
		}
	}

	cin>>n;
	cout<<c[n]<<endl;
}

