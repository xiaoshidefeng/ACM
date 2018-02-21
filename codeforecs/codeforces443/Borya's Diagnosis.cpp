#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N],b[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,i,j,k, now = 0;
	cin>>n;
	for (i = 0; i < n ; i++) {
		scanf("%d%d",&a[i], &b[i]);
	}
	for (i = 0; i < n ; i++) {
		
		if (a[i] > now) now = a[i];
		else {
			int sub = now - a[i];
			int c = sub/b[i];
			if (c*b[i] == 0) {
				now = (b[i] + a[i]);
			} else {
				now = ((c+1)*b[i] + a[i]);
			}
		}
	}
	printf("%d\n", now);
}

