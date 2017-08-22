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

int a[5555]; 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,i,j,k,n2;
	CLR(a,0);
	scanf("%d",&n);
	n2= n*2;
	for(i=0;i<n2;i++) {
		
		scanf("%d",&a[i]);
	}
	
	sort(a,a+n2);
	if(a[n]==a[n-1]) {
		
		printf("NO\n");
	}else {
		printf("YES\n");
	}
}