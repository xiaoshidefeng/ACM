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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
	cin>>n>>k;

	int g[300]={0};

	for (int i = 0; i <k; ++i)
	{
		int r;
//		cin>>r;
		scanf("%d",&r);
		g[r]=1;
	}
	
	int c = 0;
	while(1)
	{
		int flag = 1;
		int tt[300];
		for (int i = 0; i < 300; ++i)
		{
			tt[i]=g[i];
		}
		for (int i = 1; i <=n; ++i)
		{
			if (g[i]==1)
			{
				tt[i-1]=1;
				tt[i+1]=1;
			}else{
				flag=0;
			}
		}
		for (int i = 0; i < 300; ++i)
		{
			g[i]=tt[i];
		}
		if(flag){
			cout<<c+1<<endl;
			break;
		}else c++;
	}
	}

}

