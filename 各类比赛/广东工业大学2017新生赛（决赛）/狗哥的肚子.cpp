#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[3];

double p = 3.14159;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n;
	cin>>n;
	while(n--) {
		int x;
		cin>>x;
		double a, b,r,w,maxn=0;
		
		while(x--) {
			scanf("%s", c);
			if(c[0] == 'T') {
				cin>>a>>b;
				w = a*b/2;
			} else if (c[0] == 'R'){
				cin>>a>>b;
				w = a*b;
			}else if(c[0] == 'C') {
				cin>>r;
				w= r*r*p;
			}	
			if(w>maxn) maxn = w;
		} 
		
		printf("%.2lf\n", maxn);

	}
}

