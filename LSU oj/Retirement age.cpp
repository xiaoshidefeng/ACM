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

int main()
{
	//freopen("f:/input.txt","r",stdin);
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		if(c-b>300000||(c-a)>600000)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}