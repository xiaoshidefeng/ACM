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
	string g[200];
	for(int i=0;i<n;i++){
		cin>>g[i];
	}
	int s=INF;
	int e=-INF;
	int l=INF;
	int r=-INF;
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]=='B'){
				count++;
				if(i<s)s=i;
				if(i>e)e=i;
				if(j<l)l=j;
				if(j>r)r=j;
			}
		}
	}
	int maxs = e-s+1;
	int maxl = r-l+1;
	int maxn = max(maxs,maxl);
	if(maxn<(-INF+1)){
		cout<<1<<endl;
		return 0;
	}
	bool flag = true;
	if(maxs>maxl){
		if(m<maxs){
			flag=false;
		}
	}else{
		if(n<maxl){
			flag=false;
		}
	}
	if(flag){
		cout<<maxn*maxn-count<<endl;
	}else{
		cout<<-1<<endl;
	}
//	cout<<maxs<<" "<<maxl<<endl;
}

