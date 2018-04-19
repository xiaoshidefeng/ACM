#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
const int MAX = 1e5+10;


int a[MAX];
int visited[MAX];
long long res[MAX];
int temp,n;

int dfs(int i){
	if(visited[i] == 1) return temp;
	else{
		temp++;
		visited[i] = 1;
		dfs(a[i]);
	}
}

int cmp(int a, int b) {
	return a>b;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	cin>>n;
	memset(visited,0,sizeof(visited));
	memset(res,0,sizeof(res));
	for(int i=1; i<=n; i++){
		scanf("%d",&a[i]);
	}
	int fl=0;
	for(int i=1; i<=n; i++) {
		temp=0;
		res[fl] = dfs(a[i]);
		fl++;
	}
	sort(res,res+n,cmp);
	fl=0;
	long long sum=0;
	while(res[fl]!=0){
		sum += (long long)res[fl]*res[fl];
		fl++;
	}
	sum += 2*res[0]*res[1];
	cout<<sum<<endl; 
}

