#include<bits/stdc++.h>
using namespace std;
const double eps = 1.0e-6; 
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
int a[100005];
int b[100005];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) cin >> a[i];
	
	if(n==1)
	{
		cout << 0 << endl;
		return 0;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++) b[i]=a[i];
	int dis = a[n-1]- a[0];
	
	int cc[10];
	for(int i=-2;i<=2;i++)
	{
		cc[i+2] = (dis+i)/(n-1); 
	}
	int need = dis/3;
	
	int min1 =1e8;
	
	for(int k=0;k<5;k++)
	{
		for(int j=-1;j<=1;j++)
		{
			int num=0;
			for(int i=0;i<n;i++) a[i]=b[i];
			a[0] = a[0] + j;
			if(j!=0) num++;
			for(int i=1;i<n;i++)
			{
				if( abs(cc[k] - (a[i]-a[i-1])) <=1)
				{
				    if(abs(cc[k] - (a[i]-a[i-1]))==1)num++;
					a[i]=a[0] + cc[k]*i;
				}
				else{
					num=-1;
					break;
				}
			} 
			if(num!=-1)
			{
				min1 = min(min1,num);
			}
		}	
	}
	if(min1==1e8) cout << -1 << endl;
	else cout << min1 << endl;
} 
