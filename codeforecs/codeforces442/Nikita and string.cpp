#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=5555;

char c[N];
int pre[N],nex[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i, j ,k, le, sum;
	scanf("%s", &c);
	le = strlen(c);
	CLR(pre, 0);
	CLR(nex, 0);
	sum = 0;
	for (i = 0 ; i < le; i++) {
		if (c[i] == 'a') ++sum;
		else pre[i] = sum;
	}
	sum = 0;
	for (i = le -1 ; i >= 0; i--) {
		if (c[i] == 'a') ++sum;
		else nex[i] = sum;
	}
	int maxn = -INF;
	for (i = 0; i < le; i++) {
		sum = 0;
		for (j = i; j < le; j++) {
			if (c[j] == 'b') {
				sum++;
				if (pre[i] + sum + nex[j] > maxn) maxn = pre[i] + sum + nex[j];
			}
			
		}
	}
	if (maxn == -INF) maxn = le;
	printf("%d\n", maxn);
}

