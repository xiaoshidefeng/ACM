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

__int64 a[10001];

int main()
{
	a[1] = 2;
	a[2] = 7;
	for(int j = 3;j<=10000;j++){
		a[j] = a[j-1] + 4*(j-1)+1;
	}
	int n,i;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&i);
		printf("%d\n",a[i]);
	}
}