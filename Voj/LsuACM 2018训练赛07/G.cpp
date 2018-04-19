#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i , j ,k , n , m, co;
	scanf("%d%d", &n,&m);
	k = (ceil)((n - 1)/2) + 1;
	printf("%d\n", k);
	int last = 1;
	int f = 1;
	for (i = 0 ; i < k ; i ++) {
		printf("1 %d\n", ++last);
		for (j = last + 1, co = 1; j < n; j ++) {
			printf("%d %d\n", last, j);
			last = j;
			
			++co;
			if (j == n) {
				f = 0;
				break;
			}
			if (co == k) {
				break;
			}
		}
		if (f == 0) {
			break;
		}
	}
	
	
}

