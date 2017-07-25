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
	__int64 n,k,t,x,w;
	int c = 1;
	while(scanf("%I64d%I64d",&n,&k)!=EOF) {
		printf("Case #%d: ",c);
		++c;
		t=k-n;
		if(t>0) {
			x=t%(n-1);
			w=t/(n-1);
			
			if(x==0) {
				if(w%2==0){
					printf("%I64d\n",n);
				}else{
					printf("%I64d\n",n-1);
				}
				
			}else if(x<(n-1)){
				printf("%I64d\n",x);
			} 
		}else{
			printf("%I64d\n",k);
		}
		
	}
}