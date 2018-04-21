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
	int n,m;
	cin>>n>>m;
	if(n-1<=m&&m<=(2*n+2)){
		if(n==m+1){
			n--;
			printf("0");
		}
		if(m<=2*n){
			for(int i=0;i<m-n;i++)printf("110");
			for(int i=0;i<2*n-m;i++)printf("10");
//			printf("1");
		}else{
			for(int i=0;i<n;i++)printf("110");
			for(int i=0;i<m-2*n;i++)printf("1");
		}
		cout<<endl;
	}else{
		cout<<-1<<endl;
	}
}

