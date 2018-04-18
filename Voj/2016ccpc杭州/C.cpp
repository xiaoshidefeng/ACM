#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int main()
{
	int g,n;
	int s[100005];
	cin>>g;
	int ci=0;
	while(g--){
		ci++;
		cin>>n;
		s[0]=0;
		for(int i=1;i<=n;i++){
			int y;
//			cin>>t;
			scanf("%d",&y);
			s[i]=y;
		}
		if(n==1){
		  printf("Case #%d: %d\n",ci,1);
		  continue;	
		}
		int minn=INF;
		int xminn;
		int at=0;
		int t;
		double v;
		for(int i=0;i<n;i++){
			if(s[i+1]-s[i]<minn){
				minn=s[i+1]-s[i];
				xminn=i;
			}
		}
//		cout<<minn<<endl;
		v=s[xminn+1]-s[xminn];
		for(int i=xminn-1;i>=0;i--){
			t=(ceil)((s[i+1]-s[i])/v);
			cout<<t<<endl;
			at+=t;
			v=(double)(s[i+1]-s[i])/t;
		}
		cout<<"a"<<at<<endl;
		v=s[xminn+1]-s[xminn];
		for(int i=xminn+1;i<n;i++){
			t=(int)(s[i+1]-s[i])/v;
			cout<<t<<endl;
			at+=t;
			v=(double)(s[i+1]-s[i])/t;
		}
		printf("Case #%d: %d\n",ci,at);
//		cout<<at+1<<endl;
		
		

	}

}

