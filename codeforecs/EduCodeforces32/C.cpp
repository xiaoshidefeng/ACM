#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[N];

int a[N];

int z[30];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i , j , k;
	while (scanf("%s", c) != EOF) {
		
	    int le = strlen(c);
	    
	    for ( i = 0 ; i < le ; i ++) {
	    	a[i] = c[i] - 'a';
		}
		CLR(z, -1);
		int cnt, l, r, minx = INF;
		for ( i = 0 ; i < 26 ; i ++) {
			cnt = 0;
			for (j = 0; j < le; j ++) {
				if (a[j] == i) {
					l = j;
					cnt = l + 1;
					break;
				}
			}
			if (cnt > minx || cnt == 0) continue;
			r = l;
			for (j = l + 1; j < le; j ++) {
				if (a[j] == i) {
					r = j;
					if (r - l > cnt) cnt = r - l;
					l = r;
				}
			}
			
			if (le - r > cnt ) cnt = le  - r ;
			if (cnt < minx) minx = cnt;
		}
		cout << minx << endl;
	}
}
