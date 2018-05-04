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
	int len = s.length();
	map<char, int> m;
	map<char,int>::iterator it;
	int z=0;

	for (int i = 0; i < len; ++i)
	{
		if(m[s[i]]==0){
			z++;
			m[s[i]]=1;
		}else{
			m[s[i]]+=1;
		}
	}
	if(z==4){
		cout<<"Yes"<<endl;
	}else if(z==3){
		int flag = false;
		it = m.begin();
		while(it != m.end())
		{

		    if(it->second >=2){
		    	flag = true;
		    	break;
		    }
		    it ++;         
		}
		if(flag)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}else if(z==2){
		int flag = true;
		it = m.begin();
		while(it != m.end())
		{
		    //it->first;
//		    it->second;
//		    cout<<it->second<<endl;
		    if(it->second <2){
		    	flag = false;
		    	break;
		    }
		    it ++;         
		}
		if(flag)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
}

