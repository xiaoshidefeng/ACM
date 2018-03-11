#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i ,j ,k, n, sum = 0, q1, q2;
	cin>>n;
	for (i = 0; i < n;i ++) {
		cin>>a[i];
	}
	q1 = q2 = 0;
	for (i = 0; i < n;i ++) {
		if (a[i] == 0) {
			++sum;
			continue;
		}
		
		if (a[i] == 1) {
			if (q1 == 1) {
				++sum;
				q1 = 0;
				q2 = 0;
				continue;
			} else {
				q1 = 1;
				q2 = 0;
			}
		} else if (a[i] == 2) {
			if (q2 == 1) {
				++sum;
				q1 = 0;
				q2 = 0;
				continue;
			} else {
				q2 = 1;
				q1 = 0;
			}
		} else {
			if (q1 == 1 && q2 == 1) {
				++sum;
				q1 = 0;
				q2 = 0;
			} else if (q1 == 1 && q2 == 0){
				
				q1 = 0;
				q2 = 1;
			} else if (q1 == 0 && q2 == 1) {
				
				q1 = 1;
				q2 = 0;
			}else {
				q1 = q2 = 1;
				
			}
		}
	}
	cout << sum <<endl;
}

