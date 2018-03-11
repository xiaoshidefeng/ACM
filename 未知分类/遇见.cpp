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

double a[1111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j,n;
	double m,k,ma,mi,mat,mit;
	while(scanf("%d%lf%lf",&n,&m,&k) != EOF) {	
		ma = -9999999;
		mi = 9999999;
		if (n == 0) {
			ma = 0;
			mi = 0;
		}
		for(i = 0; i < n;i++) {
			scanf("%lf", &a[i]);
			if (a[i] > ma) ma = a[i];
			if (a[i] < mi) mi = a[i];
		}		
		mat = (k * 3.6) / (ma + m);
		mit = (k * 3.6) / (mi + m);
		printf("%.0lf %.0lf\n", ceil(mat), ceil(mit));
		//printf("%lf %lf\n", ma, mi);
		//printf("%lf %lf\n", mat, mit);
	}	
	
}