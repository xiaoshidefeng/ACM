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

struct aaa{
	int ll,rr,t;
};

bool cmp(const aaa &a, const aaa &b){
	return a.ll<b.ll;
}

aaa a[1000];
aaa b[1000];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,x,y,l,r,sum; 
	cin>>zu;
	while(zu--)
	{
		CLR(a,0);
		CLR(b,0);
		
		scanf("%d%d%d%d",&n,&m,&x,&y);
		for(i=0;i<x;i++){
			scanf("%d%d",&a[i].ll,&a[i].rr);
			if(a[i].rr-a[i].ll+1>=m) a[i].t=1;
		}
		
		for(i=0;i<y;i++){
			scanf("%d%d",&b[i].ll,&b[i].rr);
			if(b[i].rr-b[i].ll+1>=m) b[i].t=1;
		}
		
		sort(a,a+x,cmp);
		sort(b,b+y,cmp);
		sum=0;
		/*
		for(i=0,j=0;i<x;i++){
			if(a[i].t==1){
				while(b[j].t==0&&j!=y){
					++j;
				}
				if(j==y) break;
				
				l=max(a[i].ll, b[j].ll);
				r=min(a[i].rr, b[j].rr);
				if(r>n){
					r=n;
				}
				
				
				if(r-l+2-m>0) sum+=(r-l+2-m);
				else if(r==b[j].rr){
					++j;
					if(j==y) break;
					--i;
					continue;
				}
			}
		}
		*/
		
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				l=max(a[i].ll, b[j].ll);
				r=min(a[i].rr, b[j].rr);
				if(r>n){
					r=n;
				}
				
				
				if(r-l+2-m>0) sum+=(r-l+2-m);
			}
		}
		
		printf("%d\n", sum);
		
	}
}