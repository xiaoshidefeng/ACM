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
	long long n,t;
	long long day=0;
	cin>>n>>t;
	for(int i=0;i<n;i++) {
		int temp;
		scanf("%d",&temp);
		t -= 86400-temp;
		day++;
		if(t <= 0) break;
	}
	cout<<day<<endl;
}

