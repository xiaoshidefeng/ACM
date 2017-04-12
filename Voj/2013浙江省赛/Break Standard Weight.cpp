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
int maxx;
set<int>s;
set<int>::iterator it1;

void finds(int a,int b,int c)
{

	s.insert(a+b+c);
	s.insert(b-a+c);
	
	
	
	if(c>a-b)
		s.insert(c-(a-b));
	
	if(c>(b-a))
		s.insert(c-(b-a));
		
	if(a>(c-b))
		s.insert(a-(c-b));
	
	if(a>(b-c))
		s.insert(a-(b-c));
		
	if(b>(c-a))
		s.insert(b-(c-a));
	
	if(b>(a-c))
		s.insert(b-(a-c));
		
	
	
	
	if(c>b)
	{
		s.insert(c-b);
		s.insert(c-a);
		if(c>a+b)
		{
			s.insert(c-a-b);
		}
	}
	
	if(c>a){
		s.insert(c-a);
	}
	
	if(c<b){
		s.insert(b-c);
		if(b>a+c){
			s.insert(b-a-c);
		}
		
	}
	
	if(c<a){
		s.insert(a-c);
	}
	
	
	
	
	s.insert(a+b);
	s.insert(a+c);
	s.insert(c+b);
	
	if(b!=a)
	s.insert(b-a);
	
	s.insert(a);
	s.insert(b);
	s.insert(c);
	
	if(s.size()>maxx)
		maxx=s.size();
/*	
	for(it1=s.begin();it1!=s.end();it1++)
	{
		cout<<*it1<<endl;
	}
	printf("\n"); */
	
}


int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,x;
	scanf("%d",&zu);
	while(zu--)
	{
		maxx=0;
		
		scanf("%d%d",&n,&m);
		x=n/2;
		for(i=1;i<=x;i++)
		{
			s.clear();
			finds(i,n-i,m);
		} 
		x=m/2;
		for(i=1;i<=x;i++)
		{
			s.clear();
			finds(i,m-i,n);
		} 
		
		
		
		
		printf("%d\n",maxx);
	}
	
}