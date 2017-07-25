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

int x,n,i; 

int gcdd(int a,int b){
	int c;
	while(b!=0)  
   { c=a%b; a=b;  b=c;} 
   
   return i/a;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int j,k,s;
	scanf("%d%d",&x,&n);
	
	for(i=2;i<=n;i++){
		if(x>=i){
			k=gcdd(x,i);
		}else{
			k=gcdd(i,x);
		}
		printf("%d\n",k);
	}
}