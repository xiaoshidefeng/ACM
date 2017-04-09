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
const int N=1e9+7;

int ni[13]={
	0,31,28,31,30,31,30,31,31,30,31,30,31
};

int nii[13]={
	0,31,29,31,30,31,30,31,31,30,31,30,31
};

int a[10000][13][32];



int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int zu,i,j,k,nian,yue,ri,nian2,yue2,ri2,sum,n,y,r,d1,d2,x,q,pre,s;
	a[2000][1][1]=0;
	pre=0;
	for(i=2000;i<=9999;i++)
	{
		if(i%4==0&&(i%100!=0)||i%400==0)
		{
			for(j=1;j<=12;j++)
			{
				for(k=1;k<=nii[j];k++)
				{
					s=0;
					x=10000*i+100*j+k;
					while(x>0)
					{
						q=x%10;
						x/=10;
						if(q==9) ++s; 
					}
		
					a[i][j][k]=pre+s;
					pre=a[i][j][k];
				}
			}
		}else{
			for(j=1;j<=12;j++)
			{
				for(k=1;k<=ni[j];k++)
				{
					s=0;
					x=10000*i+100*j+k;
					while(x>0)
					{
						q=x%10;
						x/=10;
						if(q==9) ++s; 
					}
					a[i][j][k]=pre+s;
					pre=a[i][j][k];
				}
			}
		}
		
		
	}
	
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d%d%d%d%d%d",&nian,&yue,&ri,&nian2,&yue2,&ri2);
		
		
		x=10000*nian+100*yue+ri;
		s=0;
		while(x>0)
		{
			q=x%10;
			x/=10;
			if(q==9) ++s; 
		}
		
		printf("%d\n",a[nian2][yue2][ri2]-a[nian][yue][ri]+s);
		
		
		
	}
}