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

int a[9999];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n;
	while(scanf("%d",&n)!=EOF) {
		
		for(int i = 1;i<=n;i++) {
			
			scanf("%d",&a[i]);
		}
		int malen = 1,ma=1;
		for(int i=1;i<=n;i++) {
			if(a[i]!=-1) {
				malen = 1;
				int q = a[i];
				++malen;
				while(a[q]!=-1) {
					++malen;
					q = a[q];
				}
				if(malen>ma) ma=malen;
			}
		}
		printf("%d\n",ma);
	}
}