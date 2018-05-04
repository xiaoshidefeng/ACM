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
	int hh,mm;
	double H,D,C,N;
	cin>>hh>>mm;
	cin>>H>>D>>C>>N;
	if(hh<20){
		int mx = (60-mm)+(20-hh-1)*60;
		// cout<<0.8*C*(H+mx*D)/N<<endl;
		double t1 = (ceil)((H+mx*D)/N);
		double r1 = t1*C*0.8;
		double t2 = (ceil)(H/N);
		double r2 = C*t2;
		if(r1<r2){
//			cout<<"okok"<<endl;
			printf("%.4lf",r1);
//			cout<<r1<<endl;
		}else{
			printf("%.4lf",r2);
//			cout<<r2<<endl;
		}
	}else{
		double t2 = (ceil)(H/N);
		double r2 = 0.8*C*t2;
		printf("%.4lf",r2);
//		cout<<r2<<endl;
	}
}

