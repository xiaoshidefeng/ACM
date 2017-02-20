#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d",&c);
	while(c--)
	{
		scanf("%d%d",&a,&b);
		if(a%b==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
}