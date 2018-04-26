#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
typedef long long ll;
const long long mod=1e9+7;
typedef vector<ll> vec;
typedef vector<vec> mat;


mat mul(mat &A, mat &B) {
	mat C(A.size(), vec(B[0].size()));
	for (int i = 0 ; i < A.size(); i++) {
		for (int k = 0; k < B.size(); k++) {
			for (int j = 0; j < B[0].size(); j++) {
				// 注意负数要加mod  
				C[i][j] = (((C[i][j] + A[i][k] * B[k][j]) % mod) + mod ) % mod;
			}
		}
	}
	return C;
} 

mat pow(mat A, ll n) {
	mat B(A.size(), vec(A.size()));
	for (int i = 0; i < A.size(); i++) {
		B[i][i] = 1;
	}
	while (n > 0) {
		if (n & 1) B = mul(B, A);
		A = mul(A, A);
		n >>= 1;
	}
	return B;
}

ll n;

void solve() {
	mat A(4, vec(4));
	A[0][0]=1;  
    A[0][1]=5;
    A[0][2]=1;  
    A[0][3]=-1;
    
    A[1][0]=1;
    A[2][1]=1;
    A[3][2]=1;
    A = pow(A, n - 4);
    
    ll res = ((A[0][0] * 36) % mod + (A[0][1] * 11) % mod + (A[0][2] * 5) % mod + (A[0][3] * 1) % mod) % mod;
    
    printf("%LLd\n", res);
	
}


int main()
{
	while(cin>>n) {
		if (n == 1) {
			cout<<1<<endl;
			continue;
		} else if (n == 2) {
			cout<<5<<endl;
			continue;
		} else if (n == 3) {
			cout<<11<<endl;
			continue;
		} else if (n == 4) {
			cout<<36<<endl;
			continue;
		}
		solve();
	}
	
	
}

