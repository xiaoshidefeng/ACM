#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int n,m,k;
queue<int> que;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	while(cin>>n>>m>>k) {
		while(!que.empty()) {
			que.pop();
		}
		for(int i=0;i<n;i++) {
			int t;
			scanf("%d",&t);
			que.push(t);
		}
		sort(que,que);
		int ans=0;
		int flag = que.top(); que.pop();
		while(!que.empty()) {
			int kk=k;
			int now = que.top();
			if(now <= flag+k-1) {
				cout<<que.top()<<endl;
				que.pop();
				if(kk>0) kk--;
				else ans++;
			}else{
				flag = que.top(); que.pop();
			}
		}
		cout<<ans<<endl;
	}
}

