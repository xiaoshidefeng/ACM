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

char c[1000]= "qwertyuiopasdfghjkl;zxcvbnm,./";
char a[3];
char b[111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	//printf("%s\n",c);
	int le = strlen(c);
	while(scanf("%s",a)!=EOF) {
		
		if(a[0] == 'R') {
			scanf("%s",b);
			//printf("%c",b[0]);
			int le2 = strlen(b);
			for(int i = 0;i<le2;i++) {
				for(int j = 0; j< le;j++) {
					if(b[i] == c[j]){
						printf("%c",c[j-1]);
						break;
					}
					
				}

			}
		} else {
			scanf("%s",b);
			//printf("%c",b[0]);
			int le2 = strlen(b);
			for(int i = 0;i<le2;i++) {
				for(int j = 0; j< le;j++) {
					if(b[i] == c[j]){
						printf("%c",c[j+1]);
						break;
					}
					
				}

			}
		}
		printf("\n");
	}
}