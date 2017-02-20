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
typedef struct ap{
	int di;
	int ci;
}ap;
bool cmp(const ap &c,const ap &b)
{
	return c.di>b.di;
}
bool cmp2(const ap &q,const ap &w)
{
	return q.di<w.di;
}
int main()
{
	ap a[100000];
	ap b[100000];
	int sum,i,j,k,m,car,f,z,x;
	while(scanf("%d",&k)!=EOF)
	{
		f=z=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(i=0;i<k;i++)
		{	
			scanf("%d%d",&a[i].di,&a[i].ci);
			if(a[i].di>=0)
			{
				for(j=0;j<i;j++)
				{
					if(a[j].di==a[i].di)
					{
					a[i].di=0;
					a[j].ci+=a[i].ci;
					a[i].ci=0;
					i--;
					k--;
					break;
					}
				}
			}
			else
			{
				x=0;
				b[f].ci=a[i].ci;
				b[f].di=a[i].di;
				for(j=0;j<f;j++)
				{
					if(b[j].di==b[f].di)
					{
						b[j].ci+=b[f].ci;
						b[f].di=0;
					a[f].di=0;
					a[f].ci=0;	
					f--;
					i--;
					k--;
					x=1;
					break;
					}
				}
				f++;
				if(x==0)
				{
					i--;
					k--;
				}
			}
			
		}
		sum=0;
		sort(b,b+f,cmp2);
		sort(a,a+k,cmp);
		car=0;
		for(i=0;i<k;i++)
		{	
					if(car+a[i].ci<=1000)
					{
						sum+=a[i].di;
						car+=a[i].ci; 
						a[i].di=0;
						a[i].ci=0;	 
					}
					else if(car+a[i].ci>1000)
					{
						a[i].ci-=1000;
						car=0;	
						sum+=a[i].di;
						i--;
						continue;		
					}
					if(car==1000)
					{
						car=0;
						continue;
					}
					while(car<1000&&i<k)
					{	i++; 
						if(car+a[i].ci<=1000)
						{
							
							car+=a[i].ci; 
							a[i].di=0;
							a[i].ci=0;	
							
						}
						else
						{
							a[i].ci=a[i].ci-(1000-car);
							car=1000;
							break;
						}
					}
					if(car==1000)
					car=0;	
			if(a[i].ci>0)
				i--;	
		}
		car=0;
		for(i=0;i<f;i++)
		{
					if(car+b[i].ci<=1000)
					{	
							sum+=(-b[i].di);
							car+=b[i].ci;	
							b[i].ci=0;
							b[i].di=0;
					}
					else if(car+b[i].ci>1000)
					{
						b[i].ci-=1000;
						car=0;		
						sum=sum+(-b[i].di);	
						i--;
						continue;	
					}
					if(car==1000)
					{
						car=0;
						continue;
					}
					while(car<1000&&i<f)
					{
						if(car+b[i].ci<=1000)
						{
							
							car+=b[i].ci; 
							b[i].di=0;
							b[i].ci=0;	
							i++; 
						}
						else
						{
							b[i].ci=b[i].ci-(1000-car);
							car=1000;
							break;
						}
					}
					if(car==1000)
					car=0;
			if(b[i].ci>0)
				i--;
		}
		printf("%d\n",sum*2);
	} 
}