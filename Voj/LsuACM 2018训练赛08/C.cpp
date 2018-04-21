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
	//freopen("f:/input.txt", "r", stdin);
	int t;
	cin>>t;
	while(t--) {
		char s[20];
		scanf("%s",s);
		
		if( 
		((s[0]=='a' && s[1]=='g' && s[2]=='o') || (s[0]=='a' && s[1]=='o' && s[2]=='g') ||
		 (s[0]=='g' && s[1]=='a' && s[2]=='o') || (s[0]=='g' && s[1]=='o' && s[2]=='a') ||
		 (s[0]=='o' && s[1]=='a' && s[2]=='g') || (s[0]=='o' && s[1]=='g' && s[2]=='a')) &&
		 
		 ((s[3]=='a' && s[4]=='g' && s[5]=='o') || (s[3]=='a' && s[4]=='o' && s[5]=='g') ||
		 (s[3]=='g' && s[4]=='a' && s[5]=='o') || (s[3]=='g' && s[4]=='o' && s[5]=='a') ||
		 (s[4]=='o' && s[4]=='a' && s[5]=='g') || (s[3]=='o' && s[4]=='g' && s[5]=='a')) &&
		 
		 ((s[6]=='a' && s[7]=='g' && s[8]=='o') || (s[6]=='a' && s[7]=='o' && s[8]=='g') ||
		 (s[6]=='g' && s[7]=='a' && s[8]=='o') || (s[6]=='g' && s[7]=='o' && s[8]=='a') ||
		 (s[6]=='o' && s[7]=='a' && s[8]=='g') || (s[6]=='o' && s[7]=='g' && s[8]=='a')) 
		 
		 ){
		 	cout<<1<<endl;
		 	continue;
		 }
		 
		
		
		s[9] = s[0];
		s[10] = s[1];
		int count = 0;
		for(int i=0;i<=8; i++) {
			if( (s[i]=='g' && s[i+1]=='g'&&s[i+2]=='g') || (s[i]=='a' && s[i+1]=='a'&&s[i+2]=='a') ||
			(s[i]=='o' && s[i+1]=='o'&&s[i+2]=='o') ) {
				count++;
			}
		}
		if(count >= 2) cout<<3<<endl;
		else if(count == 1) cout<<2<<endl;
		else cout<<1<<endl;
	}
}

