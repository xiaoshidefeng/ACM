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
double a[6000];
double b[6000];
double c[6000];
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,m;
	int i,j,k;
	while(scanf("%d%d",&n,&m)!=EOF) {
		//int a[]
		for(i = 0;i < n; i++) {
			
			scanf("%lf%lf",&a[i],&b[i]);
			c[i] = a[i]/b[i];
		}
		
		sort(c,c+n);
		printf("%.8lf\n",c[0]*m);
		
	} 
}