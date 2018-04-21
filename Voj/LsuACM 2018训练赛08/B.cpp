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
	
	int n;
	map<int,int> m;
	map<int, int>::iterator iter;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		if(m[t]>0){
			m[t]++;
		}else{
			m[t]=1;
		}
	}
	iter = m.begin();
	int maxn = -INF;
    while(iter != m.end()) {
    	if(iter->second>maxn)maxn=iter->second;
//        cout << iter->first << " : " << iter->second << endl;
        iter++;
    }
	cout<<maxn<<" "<<m.size()<<endl;
}

