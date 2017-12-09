#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

__int64 q[20];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	__int64 a,b,c,sum=0;
	int i=3;
	q[1] = 0;
	q[2] = 1;
	for(a=3,b=1,c=1;a<=18;a++,i++){
		sum += a-2;
		q[i] = (a-1)*sum;
	}
	//for(i=1;i<=18;i++) printf("%I64d\n", q[i]);
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		cout<<q[x]<<endl;
	}
}

