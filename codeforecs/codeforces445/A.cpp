#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[10];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n , i , j , k;
	for (i = 0; i < 6 ; i ++) {
		cin>>a[i];
	}
	int sum1, sum2;
	for (i = 0; i < 6 ; i ++) {
		for (j = 0; j < 6 ; j ++) {
			if (j == i) continue;
			for (k = 0 ; k < 6; k ++) {
				if (k == i || k == j) continue;
				sum1 = a[i] + a[j] + a[k];
				sum2 = 0;
				for (int x = 0 ; x < 6 ; x ++) {
					if (x != i && x != j && x != k) sum2 += a[x];
				}
				if (sum1 == sum2) {
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO"<<endl;
}

