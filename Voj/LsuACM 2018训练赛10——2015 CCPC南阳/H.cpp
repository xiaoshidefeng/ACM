#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int n , counts, now;
char mp[7][7], mpcp[7][7];
bool vis[7][7];

bool isok ;
int zu;

struct nodes{
	int x, y;
};
vector<nodes> v;

void pri() {
	printf("Case #%d:\n", zu);
	for (int i = 1; i <= 4; i ++) {
		for (int j = 1; j <=4; j ++) {
			printf("%c", mp[i][j]);
//			cout<<mp[i][j];
		}
		printf("\n");
	}
}

bool check() {
	int visd1[7], visd2[7];
	CLR(visd1, 0);
	CLR(visd2, 0);
//	pri();
	for (int i = 1; i <= 4; i ++) {
		for (int j = 1; j <= 4; j ++) {
			if (mp[i][j] == '1') ++visd1[1];
			else if (mp[i][j] == '2') ++visd1[2];
			else if (mp[i][j] == '3') ++visd1[3];
			else if (mp[i][j] == '4') ++visd1[4];

			if (mp[j][i] == '1') ++visd2[1];
			else if (mp[j][i] == '2') ++visd2[2];
			else if (mp[j][i] == '3') ++visd2[3];
			else if (mp[j][i] == '4') ++visd2[4];

		}
		for (int q = 1; q <= 4; q ++) {
			if (visd1[q] != i || visd2[q] != i) {
				return false;
			}
		}
	}




	for (int i = 0; i < 4; i = i + 2) {
        
        for (int j = 0; j < 4; j = j + 2) {
			CLR(visd1, 0);
            visd1[mp[1 + i][1 + j] - '0'] += 1;
            visd1[mp[1 + i][2 + j] - '0'] += 1;
            visd1[mp[2 + i][1 + j] - '0'] += 1;
            visd1[mp[2 + i][2 + j] - '0'] += 1;
	        if (visd1[1] == 1 && visd1[2] == 1 && visd1[3] == 1 && visd1[4] == 1) {
	            continue;
	        } else {
	            return false;
	        }
        }

	}

	return true;

}


bool check2() {
	
}

void dfs(int no, int x, int y ) {
	bool visn[7];
	if (isok) return ;
	
	if (no >= counts - 1) {
		for (int i = 1; i <= 4;  i++) {
			mp[x][y] = '0' + i;
			if (check()) {
				pri();
				isok = true;
				return ;
			}
		} 
		
		return ;

	}

	CLR(visn, 0);
	for (int i = 1; i <= 4; i ++) {
		if (mp[i][y] == '1') {
			visn[1] = 1;
		} else if (mp[i][y] == '2') {
			visn[2] = 1;
		} else if (mp[i][y] == '3') {
			visn[3] = 1;
		} else if (mp[i][y] == '4') {
			visn[4] = 1;
		}

		if (mp[x][i] == '1') {
			visn[1] = 1;
		} else if (mp[x][i] == '2') {
			visn[2] = 1;
		} else if (mp[x][i] == '3') {
			visn[3] = 1;
		} else if (mp[x][i] == '4') {
			visn[4] = 1;
		}
	}
	if (isok) return;
	++no;
	for (int i = 1; i <= 4 && !isok; i++) {

		if (!visn[i]) {
			mp[x][y] = i + '0';
			vis[x][y]  = 1;

			int xx = v[no].x;
			int yy = v[no].y;
//			cout<<"i = "<<i<<endl;
//			pri();
//			cout<<endl;
			dfs(no, xx, yy);
			
			if (isok) return;

			mp[x][y] = '*';
			vis[x][y] = 0;
//			cout<<endl;
//			pri();
//			cout<<endl;
		}
	}
	--no;

}



int main()
{
//	freopen("f:/input.txt", "r", stdin);
	int i , j , k;
	scanf("%d", &n);
	for (zu = 1; zu <= n ; zu ++) {
		scanf("%s",mp[1] + 1);
		scanf("%s",mp[2] + 1);
		scanf("%s",mp[3] + 1);
		scanf("%s",mp[4] + 1);
		v.clear();
		CLR(vis, 0);
		counts = 0;
		for (i = 1 ; i <= 4; i ++) {
			for (j = 1; j <= 4; j ++) {
				if (mp[i][j] == '*') {
					++counts;
					nodes nd;
					nd.x = i;
					nd.y = j;
					v.push_back(nd);
				}
			}
		}
		if (counts == 0) {
			pri();
			continue;
		}
		now = 0;
		isok = false;
		int xx = v[0].x;
		int yy = v[0].y;
		dfs(0, xx, yy);
		if (!isok) pri();
	}
}
