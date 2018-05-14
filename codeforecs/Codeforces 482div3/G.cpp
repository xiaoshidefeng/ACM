#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const int N=2e5+7;
struct node {
	int a, b, c;
	int index;
}a[105];
int ans[105];

bool cmp(node a, node b)
{
	return a.b < b.b;
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int all = 0;
	bool f = 1;
	for (int i = 1; i <= m; ++i)
	{
		cin >> a[i].a >> a[i].b >> a[i].c;
		a[i].index = i;
		all += a[i].c;
	}
	sort(a + 1, a + m + 1, cmp);
	for (int i = 1; i <= m; ++i)
	{
		int j = a[i].a;
		int cnt = 0;
		while (cnt < a[i].c &&j < a[i].b)
		{
			if (ans[j] == 0)
			{
				ans[j] = a[i].index;
				++cnt;
			}
			++j;
		}
		if (cnt == a[i].c)
			ans[a[i].b] = m + 1;
		else
		{
			f = 0;
			break;
		}
	}
	if (f)
		for (int i = 1; i <= n; ++i)
			cout << ans[i] << (i == n ? '\n' : ' ');
	else
		cout << -1 << endl;
}
