#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
// 阶乘
static const int FAC[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int cantor(int *a, int n)
{
    int x = 0;
    for (int i = 0; i < n; ++i) {
        int smaller = 0;  // 在当前位之后小于其的个数
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i])
                smaller++;
        }
        x += FAC[n - i - 1] * smaller; // 康托展开累加
    }
    return x;  // 康托展开值
}


struct band {
	int a[9];
	string step;
	int val;
	cantor()
	{
	    val = 0;
	    for (int i = 0; i < 8; ++i) {
	        int smaller = 0;  // 在当前位之后小于其的个数
	        for (int j = i + 1; j < 8; ++j) {
	            if (a[j] < a[i])
	                smaller++;
	        }
	        val += FAC[7 - i] * smaller; // 康托展开累加
	    }
//	    return x;  // 康托展开值
	}
	
	do_A() {
		swap(a[0], a[7]);
		swap(a[1], a[6]);
		swap(a[3], a[5]);
		swap(a[4], a[4]);
		
	}
	
	do_B() {
		int temp1 = a[3], temp2 = a[4];
		a[3] = a[2], a[4] = a[5];
		a[2] = a[1], a[5] = a[6];
		a[1] = a[0], a[6] = a[7];
		a[0] = temp1, a[7] = a[4];
	
	}
	
	do_C() {
		int temp = a[1];
		a[1] = a[6];
		a[6] = a[5];
		a[5] = a[2];
		a[2] = temp;
	}
	
};

band b;
band vis[N];

void vfs() {
	
}


int main()
{
	//freopen("f:/input.txt", "r", stdin);
//	int 
	int i , j , k;
	for (i = 0 ; i < 8; i ++) {
		b.a[i] = i + 1;
	}
	b.cantor();
	vis[0] = b.val;
//	cout<<b.val;
}

