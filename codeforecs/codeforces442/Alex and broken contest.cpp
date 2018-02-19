#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[1000];
char da[10] = "Danil";
char ol[9] = "Olya";
char sl[9] = "Slava";
char an[9] = "Ann";
char ni[9] = "Nikita";

int main()
{
	//freopen("input.txt", "r", stdin);
	int i,j,k,cnt=0,f;
	scanf("%s",c);
	k = strlen(c);
	for (i = 0; i < k; i++) {
		if (c[i] == 'D') {
			f = 0;
			for(j = i + 1; j < i + 5; j++) {
				if (c[j] != da[j - i]) {
					f=1;
					break;
				}
			}
			if (f == 0) ++cnt;
		}
		if (c[i] == 'O') {
			f = 0;
			for(j = i + 1; j < i + 4; j++) {
				if (c[j] != ol[j - i]) {
					f=1;
					break;
				}
			}
			if (f == 0) ++cnt;
		}
		if (c[i] == 'S') {
			f = 0;
			for(j = i + 1; j < i + 5; j++) {
				if (c[j] != sl[j - i]) {
					f=1;
					break;
				}
			}
			if (f == 0) ++cnt;
		}
		if (c[i] == 'A') {
			f = 0;
			for(j = i + 1; j < i + 3; j++) {
				if (c[j] != an[j - i]) {
					f=1;
					break;
				}
			}
			if (f == 0) ++cnt;
		}
		if (c[i] == 'N') {
			f = 0;
			for(j = i + 1; j < i + 6; j++) {
				if (c[j] != ni[j - i]) {
					f=1;
					break;
				}
			}
			if (f == 0) ++cnt;
		}
	}
	if (cnt == 1) printf("YES\n");
	else printf("NO\n");
}

