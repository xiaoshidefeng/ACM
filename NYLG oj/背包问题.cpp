#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
typedef struct back{
	int mon;
	int hav;
}back;
bool cmp(const int &a,const int &b)
{
	return a.mon>b.mon;
}
int main()
{
	back a[11];
	int zu,ge,zhon,i,j,x;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d",&ge,&zhon);
		memset(a,0,sizeof(a));
		for(i=0;i<ge;i++)
		{
			scanf("%d%d",a[i].mon,a[i].hav);
		}
		sort(a,a+i,cmp)
	}	
}