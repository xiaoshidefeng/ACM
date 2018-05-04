#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char mp[200][200];

long long NN = 206*64;

long long dp[300][NN];

int vis[4];

int a[300];
struct nodes{
	long long now;
    long long tw,fi;
};


vector<nodes> v;
vector<nodes> v2;

bool cmp(nodes a, nodes b) {
    if (a.tw == b.tw) {
        return a.fi <b.fi;
    }
    return a.tw > b.tw;
}

bool cmp2(nodes a, nodes b) {
    if (a.fi == b.fi) {
        return a.tw <b.tw;
    }
    return a.fi > b.fi;
}


long long t[66], f[66];
void init() {
    t[1] = 2;
    for (long long i = 2; i < 63; i ++) {
        t[i] = t[i - 1] * (long long)2;
//        cout<<t[i]<<" i="<<i<<"\n";
    }
    f[1] = 5;
    for (long long i = 2; i < 27; i ++) {
        f[i] = f[i - 1] * (long long)5;
//        cout<<"i = " <<i << " "<<f[i]<<"\n";
    }
}

nodes val[300];
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , m;
	init();
	cin>>n>>m;
	int i , j , k;
	int cnt = 1;
    for (i = 0 ; i < n ; i ++) {
        scanf("%d", &k);
        nodes nd;
        nd.fi = 0;
        nd.tw = 0;
        for (j = 26; j >= 1; j --) {
	        while(k % f[j] == 0) {
	            nd.fi += j;
	            k /= f[j];
	    	}
		}
        for (j = 62; j >= 1; j --) {
	        while(k % t[j] == 0) {
	            nd.tw += j;
	            k /= t[j];
	    	}
		}
//		if (nd.tw > 0 && nd.fi > 0) {
//			if (nd.tw >= nd.fi) {
//				nd.tw -= nd.fi;
//				nd.now = nd.fi;
//				nd.fi = 0;
//				
//			} else {
//				nd.fi -= nd.tw;
//				nd.now = nd.tw;
//				nd.tw = 0;
//			}
//		} else {
//			nd.now = 0;
//		}
//		cout<<nd.fi<<" "<<nd.tw << " now = " << nd.now<<endl;
	
        val[cnt++] = nd;
    }
	// cnt 是个数 val[] 是存储数组 .now 当前已有 .tw 2 的个数 .fi 5的个数 
	
	memset(dp,0,sizeof(dp));
	int ans=0;
	for(int i=1; i<=n;i++){
		for(int k=m;k>=1;k--){
		for(int j=NN; j>=val[i].fi; j--){
			dp[k][j] = max(dp[k][j],dp[k-1][j-val[i].fi]+val[i].tw);
			ans = max(ans,dp[k][j]);			
		}
			
		}
	}
	cout<<ans<<endl;
	


}
