#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i , j , k;
	cin>>n;
	for (i = 0 ; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	for (i = 1; i < n - 1; i ++) {
		if( a[i] > a[i-1] && a[i] > a[i + 1]) ++cnt;
		else if (a[i] < a[i - 1] && a[i] < a[i + 1]) ++cnt;
	}
	cout<<cnt<<endl;
}

