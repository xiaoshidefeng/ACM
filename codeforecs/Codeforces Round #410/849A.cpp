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
	int n;
	int a[200];
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	if(n%2==0){
		cout<<"No"<<endl;
		return 0;
	}
	if(a[0]%2==0 || a[n-1]%2==0){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
	
}

