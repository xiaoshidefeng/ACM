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
int main()
{
	int i,j,m,sum;
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d",&j);
		sum=0;
		while(j!=0)
		{
			if(j%2==1)
			sum++;
			j/=2;
		}
		printf("%d\n",sum);
	} 
}