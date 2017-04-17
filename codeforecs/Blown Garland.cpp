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

char c[1000];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int len1,i,j,k,r,b,y,g,fr,fb,fy,fg;
	r=0;
	b=0;
	y=0;
	g=0;
	fr=0;
	fb=0;
	fy=0;
	fg=0;
	scanf("%s",c);
	len1=strlen(c);
	for(i=0;i<len1;i++)
	{
		if(c[i]=='R'&&fr==0)
		{
			j=i;
			while(j>=4)
			{
				j-=4;
				if(c[j]=='!')
				{
					c[j]='R';
					++r;
				}
			}
			while(j<len1-4)
			{
				j+=4;
				if(c[j]=='!')
				{
					c[j]='R';
					++r;
				}
			}
			fr=1;
		}
		
		if(c[i]=='B'&&fb==0)
		{
			j=i;
			while(j>=4)
			{
				j-=4;
				if(c[j]=='!')
				{
					c[j]='B';
					++b;
				}
			}
			while(j<len1-4)
			{
				j+=4;
				if(c[j]=='!')
				{
					c[j]='B';
					++b;
				}
			}
			fb=1;
		}
		
		if(c[i]=='Y'&&fy==0)
		{
			j=i;
			while(j>=4)
			{
				j-=4;
				if(c[j]=='!')
				{
					c[j]='Y';
					++y;
				}
			}
			while(j<len1-4)
			{
				j+=4;
				if(c[j]=='!')
				{
					c[j]='Y';
					++y;
				}
			}
			fy=1;
		}
		
		if(c[i]=='G'&&fg==0)
		{
			j=i;
			while(j>=4)
			{
				j-=4;
				if(c[j]=='!')
				{
					c[j]='G';
					++g;
				}
			}
			while(j<len1-4)
			{
				j+=4;
				if(c[j]=='!')
				{
					c[j]='G';
					++g;
				}
			}
			fg=1;
		}
	}
	
	printf("%d %d %d %d\n",r,b,y,g);
}