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
char c[5555];
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,m,i,j,k,cnt=0,f=0;
	scanf("%d%d",&n,&m);
	scanf("%s",c+1);
	
	for(i=0;i<n;i++){
		if(i+m>=n) {
			printf("%d\n",++cnt);
			return 0;
		}
		for(j=i+m;j>=i;j--) {
			if(j==i) {
				printf("-1\n");
				return 0;
			}
			if(c[j]=='1') {
				++cnt;
				i=j;
				break;
			}

		}
		if(i+m>=n) {
			printf("%d\n",++cnt);
			return 0;
		}

	}
}