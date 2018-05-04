#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

const __int64 MAX_R =  1e9;
const __int64 R = 1e18;

vector<__int64> v;

void init() {
	v.clear();
	for(__int64 i = 2; i<=MAX_R; i++) {
		long long temp = i*i;
		for(int j=0; j<65; j++) {
			if(temp <= R) {
				v.push_back(temp);
				temp *= i;
			}else {
				break;
			}
		}
	}
}

int main()
{
	init();
	cout<<v.size()<<endl;
	//freopen("f:/input.txt", "r", stdin);
}

