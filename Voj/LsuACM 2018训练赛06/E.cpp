#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;


char a[510][510];
int R,C;
int main()
{
	//freopen("f:/input.txt", "r", stdin);
	cin>>R>>C;
	getchar();
	for(int i=1; i<=R; i++) {
		for(int j=1; j<=C; j++) {
			scanf("%c",&a[i][j]);
		}
		getchar();
	}
	for(int i=0; i<=R; i++)
		a[i][0] = '.';
	for(int j=0;j<=C;j++)
		a[0][j] = '.';
		
	for(int i=1;i<=R; i++) {
		for(int j=1;j<=C;j++) {
			if(a[i][j] == 'S') {
				if(a[i+1][j] == 'W' || a[i-1][j] == 'W' || a[i][j+1] == 'W' || a[i][j-1] == 'W') {
					printf("No\n"); return 0;
				}
//				a[i+1][j] = a[i-1][j] = a[i][j+1] = a[i][j-1] = 'D'; 
				if(a[i+1][j] != 'S') a[i+1][j] = 'D';
				if(a[i-1][j] != 'S') a[i-1][j] = 'D';
				if(a[i][j+1] != 'S') a[i][j+1] = 'D';
				if(a[i][j-1] != 'S') a[i][j-1] = 'D';
				
			}
		}
	}
	printf("Yes\n");
	for(int i=1;i<=R;i++) {
		for(int j=1; j<=C; j++) {
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}

