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

char c[13][10]={"Tiger","Rabbit","Dragon","Snake","Horse","Ram","Monkey","Rooster","Dog","Pig","Rat","Ox","Tiger"};

int main()
{
	int zu,i,j,k,n;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d",&n);
		if(n<=12)
			printf("%s\n",c[n]);
		else
		printf("%s\n",c[13-(n-1)%12]);
	}
}