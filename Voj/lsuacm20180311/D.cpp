#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[5000][11];
char x[10];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i , j , k, le, n;
	c[1][0] = '4';
	for (i = 2; i < 5000; i ++) {
		strcpy(c[i], c[i - 1]);
		le = strlen(c[i]);
		if (le == 10) break;
		for (j = 0; j < 10;j ++) {
			if (j == le - 1 && c[i][j] == '7') {
				c[i][j + 1] = '4';
				for (int x = 0; x < j + 1; x ++) {
					c[i][x] = '4';
				}
				break;
			}
//			if (c[i][j] != '4' || c[i][j] !='7') {
//				break;
//			}
			if (c[i][j] == '4') {
				c[i][j] = '7';
				for (int x = 0; x < j ; x ++) {
					c[i][x] = '4';
				}
				break;
			}
		}
	}
	cin>>n;
	int l= 0;
	for (i = 0 ; i < 10; i++) {
		if (n == 0) break; 
		x[i] = (n%10)  + '0';
		n/=10;
		++l;
	}
	int f = 0, sum = 0;
	for (i = 1; i < 2000;i ++) {
		sum = 0;
		for (j = 0; j < 10;j ++) {
			if (c[i][j] == x[j]) {
				++ sum;
				if (sum == l) {
					cout<<i<<endl;
					return 0;
				}
				
			} else {
				break;
			}
		}
	}
}

