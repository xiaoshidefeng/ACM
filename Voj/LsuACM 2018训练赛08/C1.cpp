#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

vector<int> v;

char c[20];

void initv() {
	v.clear();
	for (int x = 0; x < 9 ; x++) {
		v.push_back((c[x] - 'a'));
	}
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i , j , zu,k;
	scanf("%d", &zu);
	while(zu--) {
		scanf("%s", c);
//		vector<int> v;
		initv();
//		int last = v[0];
		bool f = 0;
		int cnt = 0;
		for (i = 0 ; i <= 6; i ++) {
			if (c[i + 1] == c[i] && c[i + 2] == c[i]) {
//				v.erase(v.begin() + i,v.end() + i + 2);
				v.erase(v.begin() + i);
				v.erase(v.begin() + i);
				v.erase(v.begin() + i);
				for (int q = 0; q <= 3; q++) {
					if (v[q + 1] == v[q] && v[q + 2] == v[q]) {
						printf("3\n");
						f = 1;
//						return 0;
						break;
					}
				}
				if (!f) {
					printf("2\n");
					f = 1;
					
				}
				break;
			}
		}
		if (f) {
			continue;
		}
		initv();
//		int one = 0, two = 6, thr = 13;
		for (i = 0; i < v.size() ; i ++) {
			if (v[i] == 0) {
				v.erase(v.begin() + i);
				--i;
			}
		}
		for (int q = 0; q <= 3; q++) {
			if (v[q + 1] == v[q] && v[q + 2] == v[q]) {
				printf("2\n");
				f = 1;
				break;
			}
		}

		if (f) {
			continue;
		}
		initv();
//		int one = 0, two = 6, thr = 13;
		for (i = 0; i < v.size() ; i ++) {
			if (v[i] == 6) {
				v.erase(v.begin() + i);
				--i;
			}
		}
		for (int q = 0; q <= 3; q++) {
			if (v[q + 1] == v[q] && v[q + 2] == v[q]) {
				printf("2\n");
				f = 1;
				break;
			}
		}
		
		if (f) {
			continue;
		}
		initv();
//		int one = 0, two = 6, thr = 13;
		for (i = 0; i < v.size() ; i ++) {
			if (v[i] == 14) {
				v.erase(v.begin() + i);
				--i;
			}
		}
		for (int q = 0; q <= 3; q++) {
			if (v[q + 1] == v[q] && v[q + 2] == v[q]) {
				printf("2\n");
				f = 1;
				break;
			}
		}
		if (f) {
			continue;
		}
		printf("1\n");
	}
}

