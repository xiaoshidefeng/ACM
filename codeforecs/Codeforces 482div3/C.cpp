#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const int N=2e5+7;
long long a[N];
long long b[N];
int main()
{
	int n=0,m=0;
	cin>>n>>m;
	a[0]=0;
	for(int i=1;i<=n;i++){
		long long x=0;
		cin>>x;
		a[i]=a[i-1]+x;
	}	
	for(int i=0;i<m;i++){
		long long x=0;
		cin>>x;
		long long ai=lower_bound(a,a+n,x)-a;
		cout<<ai<<" "<< (x-a[ai-1])<<endl;
	}
	return 0;
}
