#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char a[200][20];

set<string>st;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	string s1, s2;
	int n;
	scanf("%d", &n);
	int i , j;
	for (i = 0; i < n ; i ++) {
		cin>>s1>>s2;
		string s = s1 + " " + s2;
		st.insert(s);
	}
	cout<<st.size()<<endl;
}

