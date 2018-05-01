#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int n, le;
char c[101][101];
int counts = 0;
int check(int cnt) {
	int i;
	int sum = cnt;
	for (i = 1; i < n; i ++) {
		for (int j = 0; j < le/2; j ++) {
			int k = cnt;
			bool f = 0;
			for (int x = j; x < j + le/2; x ++) {
				if (c[i][x] != c[0][k]) {
					f = 1;
					break;
				}
				++k;
			}
			if (!f) {
				sum += j;
				break;
			}
		}
	}
	if (sum == cnt) {
		++counts;
	}
	return sum;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	scanf("%d", &n);
	int i , j , k;
	
	
	for (i = 0 ; i < n ; i ++) {
		scanf("%s", c[i]);
		char temp[100];
		strcpy(temp, c[i]);
		 
		strcat(c[i], temp);
//		cout<<c[i]<<"\n";
	}
	le = strlen(c[0]);
	int minx = INF;
	for (i = 0 ; i < le ; i++) {
		int step = check(i);
		if (step < minx) minx = step;
	}
	if (counts >= le) {
		cout<<"-1"<<endl;
		return 0;
	}
	printf("%d\n", minx);
}

