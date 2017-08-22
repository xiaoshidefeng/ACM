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
	int zu,i,j,k,n,cnt,f=0;
	char a= 'a';
	scanf("%d%d",&n, &k);
	scanf("%s",c);
	for(i=1;i<=26;i++){
		cnt=0;
		for(j=0;j<n;j++){
			if(c[j]==a){
				++cnt;
			}
		}
		if(cnt>k){
			printf("NO\n");
			f=1;
			break;
		}
		a=a+1;
	}
	if(f==0){
		printf("YES\n");
	}
}