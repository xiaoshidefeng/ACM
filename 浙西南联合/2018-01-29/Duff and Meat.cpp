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

int a[111111];
int b[111111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n;
	
	while(scanf("%d",&n)!=EOF) {
		
		for(int i =0;i<n;i++) {
			scanf("%d%d",&a[i],&b[i]);
		}
		int mi=9999;
		int sum=0;
		for(int i =0;i<n;i++) {
			if(b[i]<mi) {
				mi = b[i];
				
			}
			sum = sum +a[i]*mi;
			
		}
		printf("%d\n",sum);
	}
}