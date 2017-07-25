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

int maps[1111][1111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,n,m,i,j,maxx,sum,k;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d%d",&n,&m);
		CLR(maps,0);
		maxx=0;
		sum=0;
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++){
				scanf("%d",&maps[i][j]);
				if(maps[i][j]>maxx) maxx=maps[i][j];
				if(maps[i][j]!=0) ++sum;
			}
		}
	//	printf("%d\n",sum);
		for(k=1;k<=maxx;k++){
			//printf("%d\n",sum);
			for(i=1;i<=n;i++){
				for(j=1;j<=m;j++){
					if(maps[i][j]<k) continue;
					
					if(maps[i+1][j]<k) ++sum;
					if(maps[i-1][j]<k) ++sum;
					if(maps[i][j+1]<k) ++sum;
					if(maps[i][j-1]<k) ++sum;
				}
			}
		}
		
		printf("%d\n",sum);
	}
}