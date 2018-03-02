#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
#define MAXN 5000
#define MAXL 5000
int prime[MAXN];
bool check[MAXL];

int a[N];

int initP() {
    CLR(check, 0);
    int  count = 0, n = 5000;
    for (int i = 2; i < n; i++)
    {
        if (!check[i])
            prime[count++] = i;
        for (int j = 0; j < count; j++)
        {
            if (i*prime[j] > MAXL)
                break; // 过大的时候跳出
            check[i*prime[j]] = 1;
            if ((i%prime[j]) == 0) // 如果i是一个合数，而且i % prime[j] == 0
                break; 
        }
    }
    return count;
    //for (int i = 0; i < count; i++)
    //    printf("%d\n", prime[i]);
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int count = initP();
	int n , i , j ,k;
	cin>>n>>k;
	for (i = 0 ; i < n ; i ++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n ; i ++) {
		if (k == 0) {
			
		}
	}
	int f;
	if (k == 0) {
		for (i = 0; i < count ; i ++) {
			f = 0;
			set<int> s;
			for (j = 0 ; j < n ; j ++) {
				int m = a[j] % prime[i];
				if (s.find(m) != s.end()) {
					f = 1;
					break;
				}
				s.insert(m);
			}
			if (f == 0) {
				cout<<prime[i]<<endl;
				return 0;
			}
		}
		return 0;
	}
	if (k == 1) {
		for (i = 0; i < count ; i ++) {
			
			
			for (j = 0 ; j < n ; j ++) {
				set<int> s;
				f = 0;
				for (int q = 0; q < n ; q ++) {
					if ( q == j ) continue;
					int m = a[j] % prime[i];
					if (s.find(m) != s.end()) {
						f = 1;
						break;
					}
					s.insert(m);
				}
				if (f == 0) {
					cout<<prime[i]<<endl;
					return 0;
				}
			}

		}
		return 0;
	}
	
}


