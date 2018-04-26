#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

long long a[20];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int cnt = 1;
	long long j ;
	for (long long i = 1; i <= 15; i ++) {
		for (j = i, cnt = 1; cnt < i ; cnt++) j *= i;
		a[i] = j;
//		cout<<i<<" "<<a[i]<<endl;
	}
	long long n;
	while(cin>>n) {
		
		for (int i = 1;i <= 15; i ++) {
//			if (a[i] <= n) cout<<a[i]<<endl;
			if (a[i] > n) {
				printf("%d\n", i - 1);
				break;
			}
		}
		if (a[15] <= n) {
			printf("15\n");
		}
	}
	
}


