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

char s[111111];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,n,m,cnt,f;
	int len1;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d",&n,&m);
		scanf("%s",s);

		//scanf("%s",s);
			
		f=0;
		for(i=0;i<n;)
		{
			j=i+1;
			cnt=0;
			if(s[i]=='0')
			{
				while(j<n&&s[j]=='0')
				{
					cnt++;
					//printf("%d\n",cnt);
					if(cnt>=m)
					{
						f=1;
						break;
					}
					++j;
				}
			}
			
			i=j;
		}
		
		if(f==1)
		{
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	
}