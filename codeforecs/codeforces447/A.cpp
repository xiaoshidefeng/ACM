#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[1000];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int le, i , j , k, cnt = 0;
	cin>>c;
	le = strlen(c);
	for (i = 0 ; i < le ; i ++) {
		if (c[i] == 'A') {
			int l = 0,r = 0;
			for (j = i - 1; j >= 0; j--) {
				if (c[j] == 'Q') ++l;
			}
			for (k = i + 1; k < le; k ++) {
				if (c[k] == 'Q') ++r;
			}
			cnt += l * r;
		}
	}
	cout<<cnt<<endl;
}

