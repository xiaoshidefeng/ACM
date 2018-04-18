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
	int cas=0;
		getchar();
	while(T--){
		long long a[100];
		int n=1;
		char c;
		while(c = getchar()) {
			if(c == '\n') break;
			else {
				a[n] = c-'0';
				n++;
			}
		}
	//	int a,b,c,d,x1,x2,x3;
	//	int n;
	//	cin>>n;
		n--;
		long long maxnum = 0;
		long long a1,a2,a3,a4,a5;
		a1=a2=a3=a4=a5=0;
		int i,j,k,l;
		for(i=1; i<=n-4; i++){
			for(j=1; i+j<=n-3; j++) {
				k=1,l=1;
//				for(k=1; i+j+k<=n-2; k++) {
//					for(l=1; i+j+k+l<=n-1; l++) {
						for(int ii = 1; ii<=i; ii++){
							a1 = (long long)1*a1*10+a[ii];
						}
						for(int jj = 1; jj<=j; jj++) {
							a2 = (long long)1*a2*10 + a[i+jj];
						}
						for(int kk=1; kk<=k; kk++) {
							a3 = (long long)1*a3*10 + a[i+j+kk];
						}
						for(int ll=1; ll<=l; ll++) {
							a4 = (long long)a4*10 + a[i+j+k+ll];
						}
						for(int oo=1; oo<=n-i-j-k-l; oo++){
							a5 = (long long)1*a5*10+a[i+j+k+l+oo];
						}
//						printf("%lld %lld %lld %lld %lld\n",a1,a2,a3,a4,a5);
						long long chen = (long long) a3*a4/a5;
						maxnum = max(maxnum, (long long)a1+a2-chen); 
						a1=a2=a3=a4=a5=0;
//					}
//				}
			}
		}
		printf("Case #%d: %lld\n",++cas,maxnum);
	}
	
}

