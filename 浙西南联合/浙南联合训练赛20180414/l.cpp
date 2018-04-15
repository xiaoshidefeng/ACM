#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
struct Node
{
	int x;
	int y;
};
struct Line
{
	double d;
	double xl;
};

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	// int i, j , k;
	int n;
	cin>>n;
	Node nd[2010];
	Line lx[30000];
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin>>x>>y;
		nd[i].x=x;
		nd[i].y=y;
	}
	int m = n*(n-1)/2;
	int g=0;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			double d1 = pow(nd[i].x-nd[j].x,2)+pow(nd[i].y-nd[j].y,2);
			double d = sqrt(d1);
			double xl;
			if((nd[i].x-nd[j].x)==0){
				xl = INF;
			}else{
				xl = (nd[i].y-nd[j].y)/(nd[i].x-nd[j].x);
			}
			
//			cout<<g<<"d"<<d<<"x"<<xl<<endl;
			lx[g].d = d;
			lx[g].xl = xl;
			g++;

		}
	}
	int count=0;
	for (int i = 1; i < m; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if(lx[i].d==lx[j].d&&lx[i].xl==lx[j].xl){
				cout<<i<<" "<<j<<"d"<<lx[i].d<<"x"<<lx[i].xl<<endl;

				count++;
			}
		}
	}
	cout<<count/2<<endl;
	
}

