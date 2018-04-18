#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
int zu, n , m, i , j , k;
double a[N];

bool check (double mi) {
	int sum = 0;
	for (i = 0; i < n; i ++) {
		sum += (int)(a[i] / mi);
	}
	if (sum < m) {
		return false;
	} else {
		return true;
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	cin>>zu;
	while (zu--) {
		cin>>n>>m;
		++m;
		double maxn = 0;
		for (i = 0 ; i < n ; i ++) {
			scanf("%lf", &a[i]);
			a[i] = a[i] * a[i] * PI;
			if (a[i] > maxn)  maxn = a[i];
		}
		
		double l = 0, r = maxn, mid;
		while (r - l > 1e-5) {
			mid = (l + r) / 2;
			if (check(mid)) {
				l = mid;
			} else {
				r = mid;
			}
		}
		
		printf("%.4f\n", l);
		
	}
	
}

