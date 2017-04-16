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

struct nd{
	int a,b;
};
nd x[11111];
nd xx[21111];

bool cmp(const nd &q,const nd &w){
	return q.a<q.b;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,n,m,k,t,c,cnt,a1,a2,a3,a4,f,x1,y1,x2,y2;
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d%d",&n,&m,&k);
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&x[i].a,&x[i].b);
			if(x[i].a>x[i].b){
				
				t=x[i].a;
				x[i].a=x[i].b;
				x[i].b=t;
			}
			xx[i].a=x[i].a;
			xx[i].b=x[i].b;
			
		}
		
		sort(x,x+m,cmp);
		cnt=0;
		c=m;
		
		for(i=0;i<m;i++)
		{
			a1=x[i].a;
			a2=x[i].b;
			f=1;
			for(j=i+1;j<m;j++)
			{
				if(a2==x[i].a)
				{
					a3=x[i].b;
					for(int e=0;e<m;e++)
					{
						// if((a3==x[e].a&&a1==x[e].b)||(a1==x[e].a&&a3==x[e].b)){
						// 	f=0;
						// 	break;

						// }
						if(a3==x[e].a&&x[e].b!=a1&&x[e].b!=a2)
						{
							a4=x[e].b;
							for()
						}
					}
				}
				else if(a2==x[i].b)
				{
					a3=x[i].a;
					for(int e=0;e<m;e++)
					{
						if((a3==x[e].a&&a1==x[e].b)||(a1==x[e].a&&a3==x[e].b)){

							f=0;
							break;

						}
					}
				}

				x1=a1;

			}
		}
		
	}
}