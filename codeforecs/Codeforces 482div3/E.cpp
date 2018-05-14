#include<bits/stdc++.h>
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
	int n=0,w=0;
	cin>>n>>w;
	long long last=0;
	long long max0=0;
	long long min0=0;
	for(int i=0;i<n;i++){
		long long x=0;
		cin>>x;
		last+=x;
		max0=max(max0,last);
		min0=min(min0,last);
	}
	if(w-max0+min0+1>0)
		cout<<(w-max0+min0+1)<<endl;
	else
		cout<<0<<endl;
	return 0;
}
