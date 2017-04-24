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

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	string s;
	int f=0;
	cin>>s;
	int i=0,j=s.length()-1;
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[j]) ++f;
		--j;
	}
	if(f==1&&s.length()%2==0) printf("YES\n");
	else if(f<=1&&s.length()%2!=0) printf("YES\n");
	else printf("NO\n");
}