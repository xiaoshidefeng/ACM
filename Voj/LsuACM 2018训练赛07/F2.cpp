#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
char s[10000005];
char s2[10000005];
struct Q{
	int s;
	int e;
};
Q q[1000009];
int main()
{
	
	CLR(s,'a');
	int n;
	int qu=0;
	cin>>n;
	int maxn=-INF;
	for(int i=0;i<n;i++){
//		string s2;
//		cin>>s2;
		
		scanf("%s",s2);
		int len = strlen(s2);
		int c;
		cin>>c;
		for(int j=0;j<c;j++){
			int t;
			cin>>t;
			bool flag2=false;
			int s3=t-1;
			int e3=t-1+len;
			for(int k=0;k<qu;k++){
				if(s3>=q[k].s&&e3<=q[k].e){
//					cout<<s2<<" ";
//					cout<<"ok"<<s3<<" "<<e3<<endl;
					flag2=true;
					break;
				}
			}
			if(flag2)continue;
			q[qu].s=t-1;
			q[qu++].e=t-1+len;
			int y=0;
			int p=t-1;
			while(true){
				s[p]=s2[y];
				p++;
				y++;
				if(p>maxn)maxn=p;
				if(y==len)break;
			}
		}
	}
//	cout<<maxn<<endl;
	for(int i=0;i<maxn;i++){
		printf("%c",s[i]);
	}
	cout<<endl;
}

