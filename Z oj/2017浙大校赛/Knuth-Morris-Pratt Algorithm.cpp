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
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char c[11111]; 

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,len1,cat,dog;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%s",c);
		len1 = strlen(c);
		cat=dog=0;
		for(i=0;i<len1;i++)
		{
			if(c[i]=='c'&&i+2<len1)
			{
				if(c[i+1]=='a'&&c[i+2]=='t')
				{
					++cat;
					i+=2;
					continue;
				}
			}
			if(c[i]=='d'&&i+2<len1)
			{
				if(c[i+1]=='o'&&c[i+2]=='g')
				{
					++dog;
					i+=2;
					continue;
				}
			}
		}
		
		printf("%d\n",cat+dog);
	}
}