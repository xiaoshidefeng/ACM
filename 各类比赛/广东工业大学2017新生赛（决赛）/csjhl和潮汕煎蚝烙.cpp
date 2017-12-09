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
	int n,q,w,e,r;
	cin>>n;
	while(n--) {
		int a,b,c,d,g;
		int a1,b1,c1,d1,g1,cnt;
		scanf("%d%d%d%d%d", &a, &b, &c, &d, &g);
		cnt=0;
		for(q=0;q<2;q++) {
			a1 = a;
			b1 = b;
			c1 = c;
			d1 = d;
			g1 = g;
			for(w=0;w<2;w++) {
				for(e=0;e<2;e++) {
					for(r=0;r<2;r++) {
									a1 = a;
			b1 = b;
			c1 = c;
			d1 = d;
			g1 = g;
						if(q) {
							b1 +=a1;
						} else {
							b1 =a1 - b1;
						}
						if(w) {
							c1 +=b1;
						} else {
							c1 =b1 - c1;
						}
						if(e) {
							d1 +=c1;
						} else {
							d1 =c1 - d1;
						}
						if(r) {
							g1 +=d1;
						} else {
							g1 =d1 -g1;
						}
						
						if(g1==24) ++cnt;
					}
				}
			}
		}
		cout<<cnt<<endl;
	} 
}

