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
	string s="";
	fill(s[0],s[0]+1000000,'a');
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s2;
		cin>>s2;
		int len = s2.length();
		int c;
		cin>>c;
		for(int j=0;j<c;j++){
			int t;
			cin>>t;
			s.replace(t-1,len,s2);
		}
	}
	cout<<s<<endl;
	
}

