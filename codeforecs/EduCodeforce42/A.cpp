#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i , j, n,sum = 0,s3 = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	int s2 = sum/2;
	if (s2 * 2 == sum) {

		for (i = 0; i < n; i ++) {
			s3 += a[i];
			if (s3 >= s2) {
				cout<<i + 1<<endl;
				return 0;
			}
		}
	}
	else {
				s2 = s2 + 1;
		for (i = 0; i < n; i ++) {
			s3 += a[i];
			if (s3 >= s2) {
				cout<<i + 1<<endl;
				return 0;
			}
		}
	}
}

