#include<bits/stdc++.h>
using namespace std;
const double eps = 1.0e-6; //¸¡µã
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const int N=2e5+7;
int a[N];
int b[N];
vector<int>v[N];
int main()
{
	int n,m;
	scanf("%d%d", &n , &m);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		b[i]=a[i];
	} 
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin >> x >> y;
		if(a[x-1] > b[y-1]) v[x-1].push_back(y-1);
		else if(a[x-1] < b[y-1]) v[y-1].push_back(x-1);
	}
	sort(b,b+n);
	for(int i=0;i<n;i++)
	{
		int num = lower_bound(b,b+n,a[i]) - b;
		for(int j=0;j<v[i].size();j++)
		{
			if(a[v[i][j]] < a[i]) num--;
		}
		cout << num << " ";
	}
} 
