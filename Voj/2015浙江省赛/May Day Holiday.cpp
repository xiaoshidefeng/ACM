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


int a[10000];


int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j,k,zu,n,m;
	a[1928]=2;
	
	for(i=1929;i<=9999;i++)
	{
		if((i%4==0&&(i%100!=0))||i%400==0)
		{
			a[i]=(a[i-1]+2)%7;
		}
		else{
			a[i]=(a[i-1]+1)%7;
		}
	}
	
	scanf("%d\n",&zu);
	while(zu--)
	{
		scanf("%d",&n);
		if(a[n]==0||a[n]==2){
			//printf("%d",a[n]);
			printf("6\n");
		}else if(a[n]==3||a[n]==4||a[n]==5||a[n]==6){
			//printf("%d",a[n]);
			printf("5\n");
		}else if(a[n]==1){
			//printf("%d",a[n]);
			printf("9\n");
		}
	}
}