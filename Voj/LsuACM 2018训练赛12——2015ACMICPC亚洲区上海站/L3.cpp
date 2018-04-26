#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
int sum=0;

int gcd(int a,int b){
    if(a%b==0) return b;
    else    return gcd(b,a%b);
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

//void check(int x,int y)
//{
//	if(x<=y){
//		int maxn = y-x;
//		for(int i=1;i<=maxn;i++){
//			if(y==lcm(x,i)+i){
//				sum++;
//				check(x,i);
//			}
//		}
//	}else{
//		int maxn = x-y;
//		for(int i=1;i<=maxn;i++){
//			if(x==lcm(i,y)+i){
//				sum++;
//				check(i,y);
//			}
//		}
//	}
//}

void dfs(int x,int y)
{
    sum++;
    if(x<y)swap(x,y);
    if(x%(y+1)==0)dfs(x/(y+1),y);

}

int main()
{
	int q;
	cin>>q;
	int z = 0;
	while(q--){
	sum = 0;
	z++;
	int x,y;
	scanf("%d%d",&x,&y);
//	cin>>x>>y;
    int gc=gcd(x,y);
    x/=gc;
    y/=gc;
	dfs(x,y);
	printf("Case #%d: %d\n",z,sum);
//	cout<<sum<<endl;
	}
}
