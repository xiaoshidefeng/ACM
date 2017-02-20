#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int zu,k,j,i,m,l,sum;
	char c[111];
	char s[111];
 	scanf("%d",&zu);
 	while(zu--)
 	{
 		sum=0;
 		scanf("%d",&m);
 		if((m%10)==8||(m%10)==0)
 		printf("YES\n");
 		else if((m%10)==9)
 		{
		 	for(i=0;i<5;i++)
		 	{
	 			k=m%10;
	 			sum+=k;
	 			m/=10;
	 		}
	 		if(sum%3==0)
	 		printf("YES\n");
	 		else
	 		printf("NO\n");
	 	}
 		else
 		printf("NO\n");
 	}
}