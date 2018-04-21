#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
struct Node{
	int index;
	int d2;
};

int main()
{
	int z;
	cin>>z;
	while(z--){
	int n,R,r;
	Node s[200];
	cin>>n>>R>>r;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		s[i].index=i+1;
		s[i].d2=x*x+y*y;
	}
	int q1=0;
	int q2=0;
	int hd[200];
	int nd[200];
	int flag=true;
	int minn=INF;
	int d3;
	if((2*r-R)>=0){
		d3=2*r-R;
	}else{
		d3=R-r;	
	}
	for(int i=0;i<n;i++){
		if(d3*d3>=s[i].d2){
			hd[q1++]=s[i].index;
			flag=false;
		}else{
			if(flag==false)continue;
			if(s[i].d2<minn){
				q2=0;
				minn=s[i].d2;
				nd[q2++]=s[i].index;
			}else if(s[i].d2==minn){
				nd[q2++]=s[i].index;
			}
		}
	}
	if(flag==false){
		cout<<q1<<endl;
		for(int i=0;i<q1-1;i++){
			cout<<hd[i]<<" ";
		}
		cout<<hd[q1-1]<<endl;
	}else{
		cout<<q2<<endl;
		for(int i=0;i<q2-1;i++){
			cout<<nd[i]<<" ";
		}
		cout<<nd[q2-1]<<endl;	
	}
	}
}

