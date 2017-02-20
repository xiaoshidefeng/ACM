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
 		scanf("%d%s%s",&l,s,c);
 		for(i=0;i<l;i++)
 		{
		 	if(c[i]<s[i])
			 {
 				m=s[i]-c[i];
 				if(m>5)
 				m=10-m;
 				sum+=m;
 			} 
 			else if(c[i]>s[i])
 			{
			 	m=c[i]-s[i];
 				if(m>5)
 				m=10-m;
 				sum+=m;
			 }
			 else
			 continue;
		 }
 		printf("%d\n",sum);
 	}
}