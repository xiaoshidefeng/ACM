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
	int i,j1,j2,j3,j,k,n,len1,a,b,c,x,y,z;
	char s[10000];
	int ab[10000];
	int bc[10000];
	int a1[10000],b1[10000],c1[10000];
	scanf("%d",&n);
	while(n--)
	{
		memset(s,0,sizeof(s));
		memset(ab,0,sizeof(ab));
		memset(bc,0,sizeof(bc));
		memset(a1,0,sizeof(a));
		memset(b1,0,sizeof(b1));
		memset(c1,0,sizeof(c1));
		scanf("%s",s);
		len1=strlen(s);
		for(i=1,j1=0,j2=0,j3=0;i<=len1;i++)
		{
			if(s[i]=='y')
			{
				a1[j1]=i;
				j1++;
			}else if(s[i]=='r'){
				b1[j2]=i;
				j2++;
			}else if(s[i]=='x'){
				c1[j3]=i;
				j3++;
			}
		}

		y=0;
		for(i=0;i<j1;i++)
		{
			for(j=0;j<j2;j++)
			{
				x=b1[j]/a1[i];
				if((x*a1[i])==b1[j])
				{
					//Õû³ý
					ab[y]=x; 
					y++;
				}else{
					continue;
				}
			}
		}
		z=0;
		for(i=0;i<j2;i++)
		{
			for(j=0;j<j3;j++)
			{
				x=c1[j]/b1[i];
				if((x*b1[i])==c1[j])
				{
					//Õû³ý
					bc[z]=x; 
					z++;
				}else{
					continue;
				}
			}
		}

		k=0;

		for(i=0;i<y;i++)
		{
			for(j=0;j<z;j++)
			{
				if(ab[i]==bc[j]){
					k++;
					break;
				}
			}
		}
			
		printf("%d\n",k);
		
	}	
}
