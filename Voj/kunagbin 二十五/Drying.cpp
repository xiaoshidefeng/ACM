#include <stdio.h>  
#include <string.h>  
#include <math.h>  
#include <iostream>  
#include <algorithm>  
using namespace std;  
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 1e5+10;
const int N=2e5+7;

int a[N];
int n,k; 

bool check(int m) {
	__int64 sum = 0;
	for (int j = 0 ; j < n; j ++) {
		if (a[j] <= m) continue;
		
		sum += ceil((double)(a[j] - m) / (k - 1));
	}
	if (sum <= m) return 1;
	else return 0;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	while(scanf("%d", &n) != EOF) {
		int maxn = -INF;
		for (int i = 0; i < n; i ++){
			scanf("%d", &a[i]);
			if (a[i] > maxn) maxn = a[i];
		} 
		
		scanf("%d", &k);
		// льеп 
		if (k == 1) {
			
			printf("%d\n", maxn);
			continue;
		}
		int l = 0, r = maxn, mid;
		while (l < r) {
			mid = (l + r) >> 1;
			if (check(mid)) {
				r = mid;
			} else {
				l = mid + 1;
			}
		}
		
		printf("%d\n", l);
	}
}

