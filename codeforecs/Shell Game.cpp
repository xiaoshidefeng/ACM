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

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	__int64 a,b,c;
	while(scanf("%I64d%I64d",&a,&b)!=EOF)
	{
		c=a%12;
	
		if(b==1)
		{
			if(c==1||c==4||c==7||c==10)
			{
				printf("0\n");
				continue;
			}
			if(c==3||c==0||c==6||c==9)
			{
				printf("1\n");
				continue;
			}
			if(c==2||c==5||c==8||c==11)
			{
				printf("2\n");
				continue;
			}
		}
		
		if(b==2)
		{
			if(c==2||c==8||c==3||c==9)
			{
				printf("0\n");
				continue;
			}
			
			if(c==4||c==10||c==11||c==5)
			{
				printf("1\n");
				continue;
			}
			
			if(c==1||c==0||c==6||c==7)
			{
				printf("2\n");
				continue;
			}
			
		}
		
		if(b==0)
		{
			if(c==0||c==5||c==11||c==6)
			{
				printf("0\n");
				continue;
			}
			if(c==1||c==7||c==2||c==8)
			//if(c==3||c==6||c==9||c==0)
			{
				printf("1\n");
				continue;
			}
			
			if(c==3||c==9||c==4||c==10)
			{
				printf("2\n");
				continue;
			}
		}
		
	}
	
	
}