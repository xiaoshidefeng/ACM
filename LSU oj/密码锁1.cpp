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
	char c[11];
 	scanf("%d",&zu);
 	while(zu--)
 	{
 		sum=0;
 		scanf("%d%s",&l,c);
 		for(i=0;i<l;i++)
 		{
		 	if(c[i]<='5')
		 	{
	 			sum+=c[i]-'0';
	 		}
	 		else if(c[i]=='9')
	 		{
		 		sum++;
		 	}
		 	else if(c[i]=='8')
	 		{
		 		sum+=2;
		 	}
		 	else if(c[i]=='7')
	 		{
		 		sum+=3;
		 	}
		 	else if(c[i]=='6')
	 		{
		 		sum+=4;
		 	}
		 }
 		printf("%d\n",sum);
 	}
}