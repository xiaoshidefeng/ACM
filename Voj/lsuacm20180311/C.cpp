#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char a[99], b[99];

double s[1000][1000];
double x[100][100];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	cin>>a>>b;
	int le = strlen(a), i, j , k, f = 0, suma = 0,sumb = 0, cnt;
	for (i = 0 ; i < le; i ++) {
		if (a[i] == '+') {
			suma += 1;
		} else if (a[i] == '-') suma -= 1;
		if (b[i] == '?') {
			f = 1;
			continue;
		}
		if (b[i] == '+') {
			sumb += 1;
		} else if (b[i] == '-') sumb -= 1;		
	}
	if (!f) {
		if (suma == sumb) {
			cout<<"1.000000000000\n"<<endl;
		} else {
			cout<<"0.000000000000\n"<<endl;
		}
		return 0;
	}
	s[1][0] = 1;
	s[1][1] = 1;
	cnt = 2;
	for (i = 2; i < 20; i ++) {
		for (j = 0; j < i + 1; j ++) {
			if (j == 0) {
				s[i][j] = s[i - 1][j];
			} else if (j == i) {
				s[i][j] = s[i - 1][i - 1];
			} else {
				s[i][j] = s[i - 1][j] + s[i - 1][j - 1];
			}
		}
	}
	cnt = 0;
	for (i = 0 ; i < le; i ++) {
		if (b[i] == '?') {
			++cnt;
		}		
	}
	int w = 0;
	for (i = 1 ; i < 12; i ++) {
		w = -i;
		for (j = 0; j < i + 1; j ++) {
//			cout<<w<<" ";
			x[i][j] = w;
			w -= -2;
			
		}
	}
	
	
	f == 1;
	if (sumb < suma) {
		if (sumb + cnt < suma) {
			cout<<"0.000000000000\n";
			return 0;
		} 
	} else if (sumb > suma) {
		if (sumb - cnt > suma) {
			cout<<"0.000000000000\n";
			return 0;
		} 
	}
	for (i = 0; i < cnt + 1; i ++) {
		if (sumb + x[cnt][i] == suma) {
			int su = 0;
			for (j = 0;j < cnt + 1; j ++) {
				su += s[cnt][j];
			}
			printf("%.12f\n", s[cnt][i]/su);
		}
	}
}

