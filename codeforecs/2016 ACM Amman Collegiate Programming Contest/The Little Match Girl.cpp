#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int x[10]={
	6,2,5,5,4,5,6,3,7,6
};

int fx[10]={
	6,7,3,5,4,2
};

int mx[10]={
	9,1,5,5,4,5,9,7,8,9
};

int gx[10]={
	0,0,1,7,4,5,9,8,0
};

char c[111111];
int a[111111];
int n;
bool f;
int wx[10];

bool dfs(int step,int sum)
{
	//printf("%d",q);
	if(f)
		return f;
	if(step==n&&sum==0){
		for(int i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		return true;
	}
	if(sum<0||n==step)
	{
		return false;
	}
	
	if(sum/(n-step)<2||(sum>7*(n-step))) return false;
	
	for(int i=0;i<6;i++)
	{
		a[step]=gx[fx[i]];
		//printf("%d  %d\n",a[step],step);
		if(!f)
			f=dfs(step+1,sum-fx[i]);
		if(f)
			return f;
	}
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	
	int zu,i,j,k,m,len1,sum,w;
	scanf("%d",&zu);
	while(zu--)
	{
		CLR(wx,0);
		scanf("%d %s",&n,c);
		sum=0;
		for(i=0;i<n;i++)
		{
			w=x[c[i]-'0'];
			sum+=(w);
			//++wx[w];
		}
		
		if(n==1)
		{
			printf("%d\n",mx[c[0]-'0']);
			continue;
		}
		
		
		//printf("%d\n",sum);
		f=false;
		dfs(0,sum);
	}
}