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
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a+b+c+d >= 80)
			printf("Yes\n");
		else
			printf("No\n");
	} 
}