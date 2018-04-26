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
	int q;
	cin>>q;
	int c=0;
	while(q--){
		c++;
	map<char,int> m;
	string s;
	cin>>s;
	int len = s.length();
	int minn = INF;
	m[s[0]]=0;
	for(int i=1;i<len;i++){
		
		if(m[s[i]]==0){
			m[s[i]]=-INF;
		}
//		cout<<i-m[s[i]]<<endl;
		if(i-m[s[i]]<minn){
			minn=i-m[s[i]];
		}
		m[s[i]]=i;
	}
	if(minn==INF)minn=-1;
	printf("Case #%d: %d\n",c,minn);
//	cout<<minn<<endl;
	}
}

