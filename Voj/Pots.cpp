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
int n , m , x;

bool vis[200][200];
int val[200][200];


struct nodes{
	int x, y;
	string step;
	int cnt;
};


int bfs() {
	int cnt = 0;
	CLR(vis, 0);
	queue<nodes> q;
	nodes nd1;
	nd1.x = n;
	nd1.y = 0;
	nd1.cnt = 1;
	nd1.step = "FILL(1)\n";
	q.push(nd1);
	
	nd1.x = 0;
	nd1.y = m;
	nd1.step = "FILL(2)\n";
	q.push(nd1);
	
	vis[n][0] = 1;
	vis[0][m] = 1;
	
	while(!q.empty()) {
		nodes nd = q.front();
		q.pop();
		if (nd.x == x || nd.y == x) {
			cnt = nd.cnt;
			cout<<cnt<<"\n";
			cout<<nd.step;
			break;
		}
		++nd.cnt;
		nodes nd2;
		nd2.cnt = nd.cnt;
		if (nd.x < n && !vis[n][nd.y]) {
			nd2.x = n;
			nd2.y = nd.y;
			nd2.step = nd.step + "FILL(1)\n";
			q.push(nd2);
			vis[nd2.x][nd2.y] = 1;
		}
		if (nd.y < m && !vis[nd.x][m]) {
			nd2.x = nd.x;
			nd2.y = m;
			nd2.step = nd.step + "FILL(2)\n";
			q.push(nd2);
			vis[nd2.x][nd2.y] = 1;
		}
		
		if (nd.x > 0 && nd.y != m) {
			if (nd.x >= (m - nd.y) && nd.x != 0) {
				nd2.x = (nd.x - (m - nd.y));
				nd2.y = m;
				
			} else {
				
				nd2.y = (nd.x + nd.y);
				nd2.x = 0;
			}
			if (!vis[nd2.x][nd2.y]) {
				nd2.step = nd.step + "POUR(1,2)\n";
				q.push(nd2);
				vis[nd2.x][nd2.y] = 1;
			}
			
		}
		
		if (nd.y > 0 && nd.x != n) {
			if (nd.y >= (n - nd.x) && nd.y != 0) {
				nd2.y = (nd.y - (n - nd.x));
				nd2.x = n;
			} else {
				
				nd2.x = (nd.y + nd.x);
				nd2.y = 0;
			}
			if (!vis[nd2.x][nd2.y]) {
				nd2.step = nd.step + "POUR(2,1)\n";
				q.push(nd2);
				vis[nd2.x][nd2.y] = 1;	
			}
		}
		
		if (nd.x > 0 && !vis[0][nd.y]) {
			nd2.x = 0;
			nd2.y = nd.y;
			nd2.step = nd.step + "DROP(1)\n";
			q.push(nd2);
			vis[nd2.x][nd2.y] = 1;
		}
		if (nd.y > 0 && !vis[nd.x][0]) {
			nd2.x = nd.x;
			nd2.y = 0;
			nd2.step = nd.step + "DROP(2)\n";
			q.push(nd2);
			vis[nd2.x][nd2.y] = 1;
		}
		
	}
	return cnt;
}

int main()
{
//	freopen("f:/input.txt", "r", stdin);
	while(cin>>n>>m>>x) {
		if (bfs() == 0) {
			cout<<"impossible"<<endl;
		} 
	}
	
}

