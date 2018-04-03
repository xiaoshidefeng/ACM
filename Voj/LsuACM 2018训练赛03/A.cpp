#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

bool cmp(int a, int b){  
    return a>b;  
} 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	string a;
	int b;
	cin>>a;
	cin>>b;
	int len = a.length();
	int len2=0;
	// set<char>ss;
	// map<char, int> m;
	int m[10000]={0};
	int c=0;
	for(int i=0;i<len;i++){
		if(m[a[i]]>0){
			// cout<<a[i]<<endl;
			// cout<<m[a[i]]<<endl;
			m[a[i]]++;
		}else{
			m[a[i]]=1;
		}
		// ss.insert(a[i]);
	}
	for (int i = 97; i <=122; ++i)
	{
		// cout<<i<<":"<<m[i]<<endl;
		if(m[i]>0){
			len2++;
			
		}
	}
	// int len2 = m.size();
	// cout<<len2<<endl;

	if (len2<b)
	{
		if(len<b){
			cout<<"impossible"<<endl;
		}else{
			cout<<b-len2<<endl;
		}
	}else{
//		sort(m+97,m+123);
//		// for (int i = 97; i <= 122; i++)
//		// {
//		// 	cout<<m[i]<<endl;
//		// }
//		int nn=len2-b;
//		int ccc=0;
//		for (int i = 97; i <= 122; i++)
//		{
//			if(ccc==nn){
//				break;
//			}
//			if(m[i]==0)continue;
//			c+=m[i];
//			ccc++;
//
//		}

		cout<<0<<endl;

	}
	
	
}

