#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
int a[1000001];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j,k,n,l,c=0,e; 
	scanf("%d",&n);	
	while(n--) {
		c=0;
		scanf("%d",&l);
		k = l/2;
		if(l%2==0) {
			for(i=1,e=1,j=k+1;e<=l;e++) {
				if(e%2==0) {
					a[e] = j;
					j++;
				} else {
					a[e] = i;
					i++;
				}
				
			}
		} else {
			for(i=1,e=1,j=k+1;e<=l;e++) {
				if(e%2==1) {
					a[e] = j;
					j++;
				} else {
					a[e] = i;
					i++;
				}
				
			}
		}
		printf("%d",a[1]);
		for(i=2;i<=l;i++) {
			printf(" %d",a[i]);
		}
		printf("\n");

	}
}

