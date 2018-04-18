#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int T;
	cin>>T;
	getchar();
	int cas = 0;
	while(T--) {
		int a[100];
		int n=1;
		char c;
		while(c = getchar()) {
			if(c == '\n') break;
			else {
				a[n] = c-'0';
				n++;
			}
		}
		n--;
		long long maxnum=0;
		long long a1=0,a2=0;
		for(int i=1; i<=n-4; i++) {
			for(int j=1; j<=i; j++) {
				a1 = a1*10+a[j];
//				printf("%d ",a[j]);
			}
//			printf("\n");
			for(int j=1; j<=n-3-i; j++) {
				a2 = a2*10+a[i+j];
//				printf("%d ",a[i+j]);
			}
//			cout<<a1<<"  "<<a2<<endl;
			maxnum = max(maxnum, (long long)a1+a2-a[n-2]*a[n-1]/a[n]);
			a1=a2=0;
//			printf("\n");
		}
		printf("Case #%d: %d\n",++cas,maxnum);
	}
}

