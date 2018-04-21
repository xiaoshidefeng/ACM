#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
struct Node{
	int index;
	int d2;
};

int main()
{
	int n,R,r;
	Node s[200];
	cin>>n>>R>>r;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		s[i].index=i+1;
		s[i].d2=x*x+y*y;
	}
	int q1=0;
	int q2=0;
	int hd[200];
	int nd[200];
	int flag=true;
	
}

