#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;


char a[N];

vector<long long> v;

int main()
{
	freopen("f:/input.txt", "r", stdin);
	int n, i , j , k;
	scanf("%d", &n);
		for (int co = 1; co <= n; co ++) {
			v.clear();
			scanf("%s", a);
			int le = strlen(a);
			int cnt = 1;
			int maxn = -INF, maxi = -INF, vi;
			for (i = 1 ; i < le ; i ++) {
				if (a[i] == a[i - 1]) {
					++cnt;
				} else {
					v.push_back(cnt);
					if (cnt > maxn) {
						maxn = cnt;
						//½áÊø i
						maxi = i - 1;
//						vi = v.size();
					}

					cnt = 1;

				}
			}
			if (cnt > maxn) {
				maxn = cnt;
				//½áÊø i
				maxi = le - 1;
			}
            bool isl = 0, isr = 0;
			int l = maxi - maxn, r = maxi + 1;
			int lcnt = 1, rcnt = 1;
			for (i = l - 1; i >= 0; i --) {
                isl = 1;
				if (a[i] == a[i + 1]) {
					++lcnt;
				} else {
					break;
				}
			}
			for (i = r + 1; i < le; i ++) {
                isr = 1;
				if (a[i] == a[i - 1]) {
					++rcnt;
				} else {
					break;
				}
			}

			int f = 0;

			if (lcnt == 1 && isl) {
				f = 1;
				if (a[l] == '0') a[l] = '1';
				else a[l] = '0';


				for (i = l - 1; i >= 0; i --) {
					if (a[i] == a[i + 1]) {
						++lcnt;
					} else {
						break;
					}
				}
				if (a[l] == '0') a[l] = '1';
				else a[l] = '0';
			}
			if (rcnt == 1 && isr) {
				if (f == 0)
				f = 2;
				else if (f == 1) f = 3;
				if (a[r] == '0') a[r] = '1';
				else a[r] = '0';

				for (i = r + 1; i < le; i ++) {
					if (a[i] == a[i - 1]) {
						++rcnt;
					} else {
						break;
					}
				}
				if (a[r] == '0') a[r] = '1';
				else a[r] = '0';
			}


			if (f > 0) {
				if (f == 1) {
					if (a[l] == '0') a[l] = '1';
					else a[l] = '0';
				} else if (f == 2) {
					if (a[r] == '0') a[r] = '1';
					else a[r] = '0';
				} else {
					if (lcnt >= rcnt) {
						if (a[l] == '0') a[l] = '1';
						else a[l] = '0';

					} else {
						if (a[r] == '0') a[r] = '1';
						else a[r] = '0';
					}
				}
			} else {
					if (lcnt > rcnt) {
						if (a[r] == '0') a[r] = '1';
						else a[r] = '0';

					} else {
						if (a[l] == '0') a[l] = '1';
						else a[l] = '0';
					}
			}




			v.clear();
			cnt = 1;
			for (i = 1 ; i < le ; i ++) {
				if (a[i] == a[i - 1]) {
					++cnt;
				} else {
					v.push_back(cnt);
					if (cnt > maxn) {
						maxn = cnt;
						//½áÊø i
						maxi = i - 1;
						vi = v.size();
					}

					cnt = 1;

				}
			}
			v.push_back(cnt);
			long long sum = 0;
			int vs = v.size();
			for (i = 0; i < vs; i ++) {
				sum += (long long)((long long)v[i] * (long long)v[i]);
			}
			printf("Case #%d: %lld\n", co, sum);
		}

}
