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

typedef struct tree{
	int val;                         // 数据域
    int pid;                           // 数组下标索引
    int lson() { return pid << 1; }        
    int rson() { return pid<<1|1; }    // 利用位运算加速获取子结点编号
}tree;

tree a[200001];

void build(int p,int l,int r)
{
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j,k,n,m,zu;
	while(scanf("%d",&zu)!=EOF)
	{
		scanf
	}
}