#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

bool vis[300];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, a, b, i , j , k, x;
	cin>>n>>a>>b;
	if (a > b) {
		int t = b;
		b = a;
		a = t;
	}
	if (a % 2 == 1 && b % 2 == 1) {
		x = (b - a)/2 + 1;
	} else if (a % 2 == 0 && b % 2 == 0) {
		x= (b - a)/2 + 1;
	} else if (a %2 == 1 && b % 2 == 0) {
		x= (b - a)/2 + 1;
	} else if (a % 2 == 0 && b % 2 == 1) {
		x=(b - a)/2  + 2;
	}
	if (x == (n/2 - 1) && n > 4) {
		cout<<"Final!"<<endl;
	} else if (x == (n / 2) && n <= 4) {
		cout<<"Final!"<<endl;
	} else {
		cout<<x<<endl; 
	} 
}

