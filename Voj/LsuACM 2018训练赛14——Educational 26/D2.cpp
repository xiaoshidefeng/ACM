#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char mp[200][200];


long long a[300];
struct nodes {
    long long i;
    long long  tw,fi;
};

vector<nodes> v;
vector<nodes> v2;

bool cmp(nodes a, nodes b) {
    if (a.tw == b.tw) {
        return a.fi > b.fi;
    }
    return a.tw > b.tw;
}

bool cmp2(nodes a, nodes b) {
    if (a.fi == b.fi) {
        return a.tw > b.tw;
    }
    return a.fi > b.fi;
}
long long t[66], f[66];
void init() {
    t[1] = 2;
    for (long long i = 2; i < 64; i ++) {
        t[i] = t[i - 1] * (long long)2;
        cout<<t[i]<<"\n";
    }
    f[1] = 5;
    for (long long i = 2; i < 64; i ++) {
        f[i] = f[i - 1] * (long long)5;
        cout<<"i = " <<i << " "<<f[i]<<"\n";
    }
}
nodes ans[300];
bool vis[300];

int main()
{
	freopen("f:/input.txt", "r", stdin);
	long long n , m;
//	init();
	cin>>n>>m;
	CLR(vis, 0);
	int i , j , k;
    for (i = 0 ; i < n ; i ++) {
        scanf("%d", &k);
        nodes nd;
        nd.fi = 0;
        nd.tw = 0;
        while(k % 5 == 0) {
            ++nd.fi;
            k /= 5;
        }
        while(k % 2 == 0) {
            ++nd.tw;
            k /= 2;
        }
        nd.i = i;
//        cout<<nd.tw<<" "<<nd.fi<<"\n";
        v.push_back(nd);
        v2.push_back(nd);
    }

    sort(v.begin(), v.begin() + v.size(), cmp);
    sort(v2.begin(), v2.begin() + v2.size(), cmp2);
//    for (i = 0 ; i < 3; i ++) cout<<v[i].tw<<" "<<v[i].fi<<"\n";
//    for (i = 0 ; i < 3; i ++) cout<<v2[i].tw<<" "<<v2[i].fi<<"\n";
    int l = 0, r = 0;
    if (m != 1) {
        long long sumL = 0, sumR = 0;
        for (i = 1; i <= m; i ++) {
            if (i % 2 == 1) {
                while(vis[v[l].i]) ++l;
                sumL += v[l].tw;
                sumR += v[l].fi;
                vis[v[l].i] = 1;
                ++l;
            } else {
                while(vis[v2[r].i]) ++r;
                sumR += v2[r].fi;
                sumL += v2[r].tw;
                vis[v2[r].i] = 1;
                ++r;
            }
        }
        cout<<min(sumL, sumR)<<"\n";
    } else {
        long long minx = -INF;
        for (i = 0; i < n; i ++) {
            long long t = min(v[i].fi, v[i].tw);
            if (t > minx) minx = t;
        }
        cout<<t<<"\n";
    }
}
