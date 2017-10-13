#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;



__int64 pow_mod(__int64 a, __int64 b, __int64 p){//a的b次方求余p 
    __int64 ret = 1;
    while(b){
        if(b & 1) ret = (ret * a) % p;
        a = (a * a) % p;
        b >>= 1;
    }
    return ret;
}
__int64 Fermat(__int64 a, __int64 p){
//费马求a关于b的逆元 
        return pow_mod(a, p-2, p);
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	//int a[10] = {1,2,3,4,5,6,7,7,8,9,10};
	__int64 a,b,c,d,zu,n,k,x,xs,q,qs,qq,i;
	scanf("%I64d", &zu);
	while(zu--) {
		scanf("%I64d%I64d%I64d", &a, &b, &c);
		k=1;
		for(i=0; i<c; i++) {
			scanf("%I64d", &d);
			k*=d;
		}
		qs = 1;
		xs = 1;
		qq = a - b;
		for(q=1;q<=qq;q++) {
			qs*=q;
		}
		for(x=b + 1;x<=a;x++) {
			xs*=x;
		}
		printf("%I64d\n", xs/qs%k);
	}
}

