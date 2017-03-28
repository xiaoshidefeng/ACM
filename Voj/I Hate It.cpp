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

typedef struct tre{
	int a,b,val;
}tre;

tre t[200002];
int q[200002],sum,maxx,A,B;

void build(int x, int y, int num)
{
	t[num].a = x;
	t[num].b = y;
	if(x==y) t[num].val = q[y]; 	//Ò¶×Ó½Úµã
	else{
		build(x,MID(x,y),num+num);	//×ó 
		build(MID(x,y)+1,y,num+num+1);	//ÓÒ 
		
		t[num].val = t[num+num].val + t[num+num+1].val;
	} 
}

void query(int x, int y, int num)
{
	if(x<=t[num].a&&y>=t[num].b)
	{
		if(maxx<t[num].val)
			maxx= t[num].val;
	}
	else
	{
		int min = MID(t[num].a,t[num].b);
		if(x>min) query(x,y,num + num +1);
		else if(y<=min) query(x,y,num+num);
		else
		{
			query(x, y, num + num);
			query(x, y, num + num +1);
		}
	}
}

void add(int x,int y,int num)
{
	t[num].val+=y;
	if(t[num].a==x&&t[num].b==x) return;
	if(x>MID(t[num].a,t[num].b)) add(x, y, num+num+1);
	else add(x, y, num + num);
}

void sub(int x, int y, int num)
{
	t[num].val-=y;
	if(t[num].a==x&&t[num].b==x) return;
	if(x>MID(t[num].a,t[num].b)) sub(x, y, num+num+1);
	else sub(x, y, num + num);
}


void update(int x, int y, int num)
{
	if(x<=t[num].a&&y>=t[num].b)
		t[num].val = B;
	else
	{
		int min = MID(t[num].a,t[num].b);
		if(x>min) query(x,y,num + num +1);
		else if(y<=min) query(x,y,num+num);
		else
		{
			query(x, y, num + num);
			query(x, y, num + num +1);
		}
	}
	
	
} 

void tquery(int x, int y, int num)
{
	if(x==t[num].a&&y==t[num].b)
		sum==t[num].val;
	else
	{
		int min = MID(t[num].a,t[num].b);
		if(x>min) query(x,y,num + num +1);
		else if(y<=min) query(x,y,num+num);
		else
		{
			query(x, y, num + num);
			query(x, y, num + num +1);
		}
	}
}

int main()
{
	freopen("f:/input.txt", "r", stdin);
	int i,j,k,zu,n,e,r;
	char s[10];
	
	while(scanf("%d%d",&n,&zu)!=EOF)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&q[j]);
		} 
		q[0]=0;
		build(1,n,1);
		for(i=1;i<=zu;i++)
		{
	
			//scanf("%d",&n);
			
			scanf("%s%d%d",s,&A,&B);
			if(s[0]=='Q')
			{
				maxx=0;
				//scanf("%d%d",&e,&r);
				query(A,B,1);
				
				//printf("%d\n",maxx);
				
			}else if(s[0]=='U')
			{
				sum = 0;
				tquery(A,A,1);
				B=B-sum;
				printf("%d\n",sum); //sum=0
				add(A,B,1);
			}
			
		}
	}
	
}