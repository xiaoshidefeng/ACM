#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N],b[N], c[N]; 
vector<long> v;

int main()
{
	int n, i ,j ,k, f = 0;
	__int64 sumT = 0;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i ++) {
		scanf("%d", &a[i]);
	}
	for (i = 0 ; i < n ; i ++) {
		scanf("%d", &b[i]);
		sumT += b[i];
	}
	int cnt = 0;
	__int64 sum;
	for (i = 0; i < n ; i ++) {
		sum = 0;
		if (a[i] <= b[i]) {
			sum += a[i];
		} else {
			if (a[i] >= sumT) {
				++cnt;
			} else {
				v.push_back(a[i]);
			}
			
		}
		sumT -= b[i];
		int size = v.size();
		for (int j = size - 1; j >= 0 ; j --) {
			if (v[j] <= b[i]) {
				sum += v[j];
				v.erase(v.begin() + j);
			} else {
				sum += b[i];
				v[j] -= b[i];
			}
		}
		sum += (__int64)b[i] * cnt;
		if (i == 0)
		printf("%I64d", sum);
		else printf(" %I64d", sum);
	}
	printf("\n");
	
}

