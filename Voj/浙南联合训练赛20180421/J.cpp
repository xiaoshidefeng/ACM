#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[3000];
char a[3000];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i , j ;
	scanf("%d", &n);
	
	scanf("%s", c);
	int cnt = 0;
	if (n % 2== 0)
	for (i = n - 1; i >=0; i = i - 2) {
		
		a[cnt] = c[i - 1];
		a[n - cnt - 1] = c[i];
		++cnt;
	}
	else {
		for (i = n - 1; i > 1; i = i - 2) {
		
			a[cnt] = c[i - 1];
			
			a[n - cnt - 1] = c[i];
			++cnt;
		}
		a[n/2] = c[0];
	}
	cout<<a<<endl;
}

