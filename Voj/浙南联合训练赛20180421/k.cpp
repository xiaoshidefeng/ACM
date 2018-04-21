#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

set<__int64> s1;
set<__int64> s2;

vector<__int64> v;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	__int64 n, m, nn;
	__int64 a, b, sum = 0;
	scanf("%I64d%I64d", &n, &m);
	nn = n * n;
	for (__int64 i = 0 ; i < m; i ++) {
		int f = 0;
		scanf("%I64d%I64d", &a, &b);
		if (s1.find(a) == s1.end()) {
			sum += (n);
		} else {
//			sum += n;
//			sum -= 1;
			sum += (s2.size() + 1);
			++f;
		}
		
		if (s2.find(b) == s2.end()) {
			sum += (n);
		} else {
			sum += (s1.size() + 1);
			++f;
		}
		if (f == 2) {
			--sum;
		}
		sum -= (1 + s1.size() + s2.size());
		s1.insert(a);
		s2.insert(b);
		v.push_back(nn - sum);
//		printf("%I64d\n", );
	}
	int vs = v.size();
	
	for (int i = 0; i < vs; i ++) {
		printf("%I64d ", v[i]);
	}
	printf("\n");
	
}

