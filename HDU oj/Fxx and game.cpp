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
int main()
{
	int n,x,k,t,x1,m,f,a,b,c,d;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&x,&k,&t);
		x1=x;
		m=0;
		a=k*k;
		b=k*k*k;
		c=k*k*k*k;
		d=k*k*k*k*k;
		while(1)
		{			
				if(((x%k)==0)&&((x/k)<(x-t)))
				{
					x/=k;
					m++;
				}else if(x-t<=1){
					m++;
					printf("%d\n",m);
					break;
				}else{
					f=0;
					for(int q=k;q<x;q=q*k)
					{
						for(int i=t;i>=1;i--)
						{
							x-=i;
							if(x>q&&x%q==0){
								m++;
								f=1;
								break;
							}
							x=x1;
						}
						if(f==1)
						{
							break;
						}
					}
					if(f==1)
					{
						break;
					}
					else
					{
						x-=t;
					}
						
			}
		}
	}
}
