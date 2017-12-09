#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=5555;

int x[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n, i;
	cin>>n;
	while(n--) {
		int a,b;
		cin>>a>>b;
		for(i=1;i<=a;i++){
			scanf("%d", &x[i]);
		}
		int sum = 0;
		int head=1,tail=0;
		for(tail=0;sum!=b;) {
			if(sum < b) {
				++tail;
				sum += x[tail];	
			}else if(sum > b) {
				sum -= x[head];
				++head;
			}
		}
		//if(head != 1) ++head;
		printf("%d %d\n", head, tail);
		
	}
}

