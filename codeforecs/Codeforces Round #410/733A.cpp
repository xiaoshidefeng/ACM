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
	string s;
	cin>>s;
	int d[200];
	int t1=-1;
	int len = s.length();
	int q=0;
	int maxn=-INF;
	int sum=0;
//	int final;
	for(int i=0;i<len;i++){
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
			int d2 = i-t1;
//			if(i==len-1&&)d2++;
			d[q++]=d2;
			if(d2>maxn)maxn=d2;
			t1=i;
			sum++;
//			final = i;
		}else if(i==len-1){
			int d2 = i-t1;
			d2++;
			d[q++]=d2;
			if(d2>maxn)maxn=d2;
			t1=i;
			sum++;
		}
	}
//	d[q++]= len-1-t1;
	cout<<maxn<<endl;
//	int t=0;
//	for(int i=0;i<q;i++){
//		cout<<d[i]<<endl;
//		if(t+d[i]<=maxn){
//			cout<<"okok"<<t+d[i]<<endl;
//			sum--;
//			t+=d[i];
//		}
//		else {
////		i--;
//		
//		t=0;
//		}
//	} 
//	cout<<sum<<endl;
}

