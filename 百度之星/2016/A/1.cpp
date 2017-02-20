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
	__int64 a,b,c,d,i,j,k,m,n,sum,q,x;
	scanf("%I64d",&n);
    int mod ;
    for(j=1;j<=n;j++)
    {
        __int64 ans=0;
        scanf("%I64d%I64d%I64d%I64d",&a,&b,&c,&d);
        for(i=0;i<b;i++)  
   	 	{  x=ans*10+a;
   	 		if(x<=c)
   	 		ans=x;
   	 		else
        	ans=x%c;  
   	 	} 
        if(ans==d)
        {
        	printf("Case #%I64d:\n",j);
			printf("Yes\n");
        }
        else
		{
			printf("Case #%I64d:\n",j);
			printf("No\n");
		}
    }
    return 0;
}
