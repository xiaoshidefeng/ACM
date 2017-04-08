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

char d[200005];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,len1,x,y,sum,minx,miny,maxx,maxy;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d %d %s",&n,&m,&d);
		len1 = strlen(d);
		x=y=1;
		sum=0;
		miny=minx=maxy=maxx=1;
		for(i=0;i<len1;i++)
		{
			if(d[i]=='>')
			{
				if(x+1-minx<m)
				{
					++x;
					if(x>maxx)
					{
						maxx=x;
					}
					continue;
				}else {
					++sum;
				}
			}
			
			if(d[i]=='<')
			{
				if(maxx-(x-1)<m)
				{
					--x;
					if(x<minx)
					{
						minx=x;
					}
					continue;
				}else{
					++sum;
				}
			}
			
			if(d[i]=='^')
			{
				if(y+1-miny<n)
				{
					++y;
					if(y>maxy)
					{
						maxy=y;
					}
					//maxy= maxy+1;
					continue;
				}else{
					++sum;
				}
			}
			
			if(d[i]=='v')
			{
				if(maxy-(y-1)<n)
				{
					--y;
					if(y<miny)
					{
						miny=y;
					}
					//miny=miny-1;
					continue;
				}else{
					++sum;
				}
			}
		}
		
		printf("%d\n",sum);
	}
}