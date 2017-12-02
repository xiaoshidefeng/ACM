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
int a[50011]; 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,m,i,j,k;
	while(scanf("%d%d",&n,&m)!= EOF) {
		if(n == -1 && m == -1) {
			break;
		}
		CLR(a,0);
		int x = sqrt(2*m);
		while((x*(x+1))>(2*m)) {
			--x;
		}
		int cnt = x*(x+1)/2;
		++x;
		int w = n - x;
		for (i=1; i <= w; i++) {
			a[i] = i;
		}
		for (i = n, j = w + 1; i > w; i--) {
			a[j] = i;
			++j;
		}
		//for ( i = 1; i <= n;i++) printf("%d\n", a[i]);
		
		
		int f;
		int r,t;
		//printf("%d\n",cnt);
		for (i=cnt; i<m;i++) {
			r=n-x;
			for(j=n,f=0;j>r;j--) {
				for(int e = j; e >r; e--) {
					if (a[e] < a[j]) {
						int temp = a[e];
						a[e] = a[j];
						a[j] = temp;
						f=1;
						break;
					}
				}
				if(f) break;
				else {
					if (x<n) {
						int temp = a[n];
						++x;
						r= n-x +1;
						a[n]=a[r ];
						a[r] = temp;
						break;
					}

				}
			}
		}
		for ( i = 1; i < n;i++) printf("%d ", a[i]);
		printf("%d\n", a[i]);
		
	}
	return 0;
}