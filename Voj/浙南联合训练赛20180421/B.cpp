#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

struct lap{
	int price;
	int quality;
};

bool cmp(lap a, lap b) {
	if(a.price==b.price)
	return a.quality<b.quality;
	else return a.price<b.price;
}

int main()
{
	lap s[100005];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d%d",&s[i].price,&s[i].quality);
	}
	sort(s,s+n,cmp);
	bool flag = true;
	bool flag2 = false;
	for(int i=0;i<n-1;i++){
//		cout<<s[i].price<<" "<<s[i].quality<<endl;
		if(s[i].price==s[i+1].price){
			if(s[i].quality!=s[i+1].quality){
				flag = false;
				break;
			}
		}else if(s[i].quality<=s[i+1].quality){
			flag2 = true;
			flag = false;
			break;
		}else{
			flag2 = true;
		}
		
	}
	
	if(flag&&flag2){
		cout<<"Happy Alex"<<endl;
	}else{
		cout<<"Poor Alex"<<endl;
	}
	
	
}

