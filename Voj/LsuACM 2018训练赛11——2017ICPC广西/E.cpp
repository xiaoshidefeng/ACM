#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
//const int N=2e5+7;

const int MAX_N = 1<<17;

int n,yu[2*MAX_N-1],huo[2*MAX_N-1],yihuo[2*MAX_N-1];

void init(int n_){
	n=1;
	while(n<n_) n*=2;
	for(int i=0;i<=2*n-1;i++) {
		yu[i] = 1;
		huo[i] = 0;
		yihuo[i] = 0;
	}
}


void update(int k, int a){
	k+=n-1;
	yu[k] = a;
	huo[k] = a;
	yihuo[k] = a;
	
	while(k>0){
		k=(k-1)/2;
		yu[k] = yu[k*2+1]&yu[k*2+2];
		huo[k] = huo[k*2+1]|huo[k*2+2];
		yihuo[k] = yihuo[k*2+1]^yihuo[k*2+2];
	}
}

int query_yu(int a, int b, int k, int l, int r){
	if(r<=a || b<= l) return 0;
	
	if(a<=l && r<=b) {
		printf("yu[k]:%d\n",yu[k]);
		return yu[k];	
	}
	else{
		int v1 = query_yu(a,b,k*2+1,l,(l+r)/2);
		int v2 = query_yu(a,b,k*2+2,(l+r)/2,r);
		printf("vl:%d & vr:%d\n",v1,v2);
		return v1&v2;
	}
}

int query_huo(int a, int b, int k, int l, int r){
	if(r<=a || b<= l) return 0;
	
	if(a<=l&& r<=b) return huo[k];
	else{
		int v1 = query_huo(a,b,k*2+1,l,(l+r)/2);
		int v2 = query_huo(a,b,k*2+2,(l+r)/2,r);
		return v1|v2;
	}
}

int query_yihuo(int a, int b, int k, int l, int r){
	if(r<=a || b<= l) return 0;
	
	if(a<=l && r<=b) return yihuo[k];
	else{
		int v1 = query_yihuo(a,b,k*2+1,l,(l+r)/2);
		int v2 = query_yihuo(a,b,k*2+2,(l+r)/2,r);
		return v1^v2;
	}
}


int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int q;
	while(cin>>n>>q){
		int time=n;
//		printf("init\n");
		init(n);
		for(int i=0;i<time;i++){
			int t;
			scanf("%d",&t);
			update(i,t);
//			printf("update\n");
		}
		
		for(int i=0;i<n*2;i++){
			printf("%d ",yu[i]);
		}
		printf("\n");
		
		
		for(int i=0;i<q;i++){
			int k;
			scanf("%d",&k);
//			printf("query\n");
			int ans_yu,ans_huo,ans_yh;
			ans_yu = query_yu(0,k-1,0,0,n) & query_yu(k,n,0,0,n);
			ans_huo = query_huo(0,k-1,0,0,n) | query_huo(k,n,0,0,n);
			ans_yh = query_yihuo(0,k-1,0,0,n) ^  query_yihuo(k,n,0,0,n);
			printf("%d %d %d\n",ans_yu,ans_huo,ans_yh);
		}
	}
}

