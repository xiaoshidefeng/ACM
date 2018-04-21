#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int main()
{
	freopen("f:/input.txt", "w", stdout);
	char s[4]={'a','g','o'};
	int count = 0;
	for(int i1=0; i1<3; i1++)
	for(int i2=0; i2<3; i2++)
	for(int i3=0; i3<3; i3++)
	for(int i4=0; i4<3; i4++)
	for(int i5=0; i5<3; i5++)
	for(int i6=0; i6<3; i6++)
	for(int i7=0; i7<3; i7++)
	for(int i8=0; i8<3; i8++)
	for(int i9=0; i9<3; i9++){
		count++;
		printf("%c%c%c%c%c%c%c%c%c\n",s[i1],s[i2],s[i3],s[i4],s[i5],s[i6],s[i6],s[i8],s[i9]);
	}
	cout<<count<<endl;
}

