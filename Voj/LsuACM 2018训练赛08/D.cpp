#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu , i , j ,k, n;
	
	scanf("%d", &zu);
	while ( zu --) {
		
	scanf("%d", &n);
	scanf("%s", a);
	
	bool f = 0;
	int cnt = 0;
	
	
	for (i = 0 ; i < n ;i ++) {
		if (a[i] == 'C') {
			if (a[i + 1] == 'C' && a[i + 2] == 'P' && a[i + 3] == 'C') {
				++cnt;
				i += 2;
			} else  if (!f){
				if (a[i + 1] == 'C' && a[i + 2] == 'P'){
					++cnt;
					f = 1;
				} else if (a[i + 1] == 'C' && a[i + 2] == 'C') {
					if (a[i + 3] == 'P' && a[i + 4] == 'C') {
						++cnt;
						i += 3;
						continue;
					}
					++cnt;
					f = 1;
				} else if (a[i + 1] == 'P' && a[i + 2] == 'C') {
					++cnt;
					f = 1;
				}
			}
			
		}

	}
	printf("%d\n", cnt);
	
	}
	
	
	
}

