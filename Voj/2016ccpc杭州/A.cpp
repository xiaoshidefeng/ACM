#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;


long long a[N];
vector<int> v;

int main()
{
//    freopen("f:/input.txt", "r", stdin);
//	freopen("f:/output.txt", "w", stdin);
    long long zu, n ,m, i , j, sum, k;
    scanf("%lld", &zu);
    for (int count = 1; count <= zu; count ++) {
        
        scanf("%lld%lld", &n, &m);
        sum = 0;
        CLR(a, 0);
        for (i = 0; i < n ; i ++) {
            scanf("%lld", &a[i]);
            sum += a[i];
        }
//        int dd = (int)(sum/m * m);
        if ( sum % m != 0) {
            printf("Case #%lld: -1\n", count);
            continue;
        }
        long long cnt = 0, f = 0;
        long long di = (long long)(sum/m);
        for (i = 0; i < n; i ++) {
            if (a[i] < di) {
                a[i + 1] = a[i + 1] + a[i];
                ++cnt;
            } else if (a[i] > di){
            	long long d = (a[i] % di);
                cnt += (long long)((a[i])/di);
                if (d > 0)
                {
                    ++cnt;
                    a[i + 1] = a[i + 1] + d;
                } else --cnt;
            }
			
        }
		
        printf("Case #%lld: %lld\n", count, cnt);
    }
}
