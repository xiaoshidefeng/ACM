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

char a1[222][1001];
char a2[222][1001];
char a3[222][1001];

int b[4][1001];
int b1[1001];
int b2[1001];
int b3[1001];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,s,m,d,i,j,k,n,mid1,mid2,mid3;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d%d",&s,&m,&d);
		for(i=0;i<s;i++)
		{
			scanf("%s %d",a1[i],&b[1][i]);
			b1[i]=b[1][i];
		}
		for(i=0;i<m;i++)
		{
			scanf("%s %d",a2[i],&b[2][i]);
			b2[i]=b[2][i];
		}
		
		for(i=0;i<d;i++)
		{
			scanf("%s %d",a3[i],&b[3][i]);
			b3[i]=b[3][i];
		}
		sort(b1,b1+s);
		sort(b2,b2+m);
		sort(b3,b3+d);
		mid1=(s/2);
		
		mid2=(m/2);
		
		mid3 = (d/2);
		
		mid1=b1[mid1];
		
		mid2=b2[mid2];
		
		mid3=b3[mid3];
		
		printf("%d ",mid1+mid2+mid3);
		
		for(i=0;i<s;i++)
		{
			if(b[1][i]==mid1)
			{
				printf("%s ",a1[i]);
				break;
			}
		}
		
		for(i=0;i<m;i++)
		{
			if(b[2][i]==mid2)
			{
				printf("%s ",a2[i]);
				break;
			}
		}
		
		for(i=0;i<d;i++)
		{
			if(b[3][i]==mid3)
			{
				printf("%s\n",a3[i]);
				break;
			}
		}
		
		
		
	}
}