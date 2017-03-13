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
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
char a[200];
char b[200];
int main()
{
	//freopen("f:/input.txt","r",stdin);
	int i,j,k,n,m,len1,f,cnt;
	while(scanf("%s",a)!=EOF)
	{
		cnt=26;
		//printf("%s",a);
		len1=strlen(a);
		for(j=0;j<=25;j++)
		{
			for(i=0;i<len1;i++)
			{
				
				if((a[i]+j)=='i'||(a[i]+j)=='i'+26)
				{
					--cnt;
					break;
				}
			}
			
		}
		
		if(cnt==0)
		printf("impossible\n");
		else
		printf("%d\n",cnt);
		
	}
}