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
	int n,a,b,c,i,j,k,sum;
	cin>>n;
	cin>>a>>b>>c;
	sum = 0;
	if (n == 1) {
		cout<<"0"<<endl;
		return 0;
	}
	if (a >= b) {
		sum += b;
		if (c < b) {
			sum += c*(n - 2);
		} else {
			sum += b*(n - 2);
		}
	} else {
		sum += a;
		if (c < a) {
			sum += c*(n - 2);
		} else {
			sum += a*(n - 2);
		}
	}
	cout<<sum<<endl;
	
}

