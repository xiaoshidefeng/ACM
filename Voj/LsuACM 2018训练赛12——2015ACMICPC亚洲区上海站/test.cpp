#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int gcd(int a,int b){    
    if(a%b==0) return b;
    else    return gcd(b,a%b);
}
 
int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main()
{
	cout<<lcm(6,4)<<endl;
}

