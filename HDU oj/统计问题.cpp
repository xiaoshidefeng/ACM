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

__int64 a[100];

int main()
{
	a[1]=3;
	a[2]=7;
	//½¨±í 
	for(int j = 3;j<=20;j++){
		a[j]=2*a[j-1]+a[j-2];
	}
	
	int i,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&i);
		printf("%d\n",a[i]); 
	}
}