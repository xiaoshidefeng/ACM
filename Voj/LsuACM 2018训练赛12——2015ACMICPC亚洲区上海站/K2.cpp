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
//	freopen("f:/input.txt", "r", stdin);
	int n, i , j , k;
	scanf("%d", &n);
		for (int co = 1; co <= n; co ++) {
			v.clear();
			CLR(a,0);
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
						vi = v.size();
					}

					cnt = 1;

				}
			}
			v.push_back(cnt);
			
			
			long long sum = 0;
			int vs = v.size();
			
			long long ct = -INF; 
			int cti = -1;
			
			for (i = 1; i < vs; i ++) {
				long long cct;
				if (v[i - 1] != 1)
				cct = (v[i] + 1)*(v[i] + 1) - (v[i - 1] ) * (v[i - 1] );
				else {
					if (i - 2 >= 0)
					cct = (v[i] + 1 + v[i - 2])*(v[i] + 1 + v[i - 2]) - 1 - v[i - 2] * v[i - 2];
					else 
					cct = (v[i] + 1)*(v[i] + 1 ) - 1;

				}
				cct -= (v[i] * v[i]);
				if (cct > ct) {
					ct = cct;
					cti = i;
				}
			}
			int cti2 = -1;
			for (i = 1; i < vs; i ++) {
				long long cct ;
				if (v[i] != 1)
				cct = (v[i - 1] + 1) * (v[i - 1] + 1)  - (v[i] ) * (v[i] );
				else {
					if (i < vs - 1)
					cct = (v[i - 1] + 1 + v[i + 1]) * (v[i - 1] + 1 + v[i + 1]) - 1 - v[i + 1] * v[i + 1];
					else 
					cct = (v[i - 1] + 1) * (v[i - 1] + 1) - 1;
				}
				cct -= (v[i - 1] * v[i - 1]);
				if (cct > ct) {
					ct = cct;
					cti2 = i;
				}
			}
			
			if (cti2 != -1) {
				int sum1 = 0;
				for (i = 0; i < cti2; i++) {
					sum1 += v[i];
				}
//				++sum1;
				if (a[sum1] == '0') a[sum1] = '1';
				else a[sum1] = '0';
			} else {
				int sum1 = 0;
				for (i = 0; i < cti; i++) {
					sum1 += v[i];
				}
				--sum1;
//				++sum1;
				if (a[sum1] == '0') a[sum1] = '1';
				else a[sum1] = '0';
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

			vs = v.size();
			for (i = 0; i < vs; i ++) {
				sum += (long long)v[i] * v[i];
			}
			printf("Case #%d: %lld\n", co, sum);
		}
	
}
