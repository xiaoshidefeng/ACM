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

int a[111][11]; 
//char c[111][11];

char c[10]; 

int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
	}
	if(n%2==0)
	{
		printf("home\n");
	}else{
		printf("contest\n");
	}
	
}