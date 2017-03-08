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
	int zu,i,j,k,n,y,x;
	char c[5];
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%s",c);
		x=c[0]-'a'+1;
		y=c[1]-'0';
		//printf("%d %d\n",x,y);
		if(x>=3&&x<=6&&y>=3&&y<=6)
		{
			printf("8\n");
			continue;
		}
		if(((x==2||x==7)&&(y>=3&&y<=6))||((y==2||y==7)&&(x>=3&&x<=6)))
		{
			printf("6\n");
			continue;
		}
		
		if((x==y&&(y==2||y==7))||((x+y==9)&&(y==2||y==7)))
		{
			printf("4\n");
			continue;
		}
		
		
		if(((x==1||x==8)&&(y>=3&&y<=6))||((y==1||y==8)&&(x>=3&&x<=6)))
		{
			printf("4\n");
			continue;
			
		}
		
		
		
		if(((x+y)==2)||(x+y==9)||(x+y==16))
		{
			printf("2\n");
			continue;
		}else{
			printf("3\n");
		}
	}
}