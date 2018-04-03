#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

long long a[100];

void init() {
	a[1] = 1;
	for(int i=2; i<=50;i++)
		a[i]=a[i-1]*i;
//	cout<<1<<endl;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int nm[50],map[100][100];
	int n,m;
	init();
//	cout<<a[2];
	while(cin>>n>>m) {
		long long sum=0;
		long long cntn=0,cntm=0;
		for(int i=0;i<n;i++) {
			for(int j=0; j<m;j++) {
				cin>>map[i][j];
				if (map[i][j] == 0 ) cntn++;
				else cntm++;
			}
//			cout<<cntn<<cntm<<endl;
			sum += a[cntn]+a[cntm];
			cntn=0,cntm=0;
		}
		for(int i=0;i<m;i++) {
			for (int j=0; j<n; j++) {
				if (map[j][i] == 0) cntn++;
				else cntm++;
			}
//			cout<<cntn<<cntm<<endl;
			sum+=a[cntn]+a[cntm];
			cntn=0,cntm=0;
		}
		
		cout<<sum<<endl;
	}
}

