#include<stdio.h>                          
#include<string.h>                         
#include<stdlib.h>                         
#include<math.h>                           
#include<algorithm>                        
using namespace std;

void huajian(__int64 a,__int64 b,__int64 s[]); 

__int64 s[20000]={0};
__int64 d[20000]={0};                       
int main()                                 
{                                          
	char a[100];    
	__int64 jiu[11]={9,99,999,9999,99999,999999,9999999,99999999,999999999,999999999};                          
	int zu,i,j,len1,w,h,k=0;                          
	__int64 num,zi1,mu1,zi2,mu2,zi,mu,e,q; 
	
	//素数表 s为素数表 
	for(i=1;i<20000;i++)
     d[i]=i+1;
	 for(i=0;i<20000;i++)
     if(d[i]!=0)
       {
         s[k]=d[i];
         for(h=i;h<20000;h++)
           if(d[h]%s[k]==0)
            d[h]=0;
         k++;
       }
	 /////////////////s                   
	scanf("%d",&zu);                          
	while(zu--)                               
	{                                         
  		scanf("%s",a);
 		j=0;
 		num=0;                              
  		len1=strlen(a);                        
  		if(a[2]=='(') 		//0.(4) 形式  
		{ 
			for(i=len1-2;i>=3;i--)
			{
				e=(a[i]-'0');
				for(w=0,q=1;w<j;w++)
				{
					q*=10;
				}
				num+=(q*e);
				j++;
			}  
							//	printf("%I64d\n",num);test ok
			zi=num;
			mu=jiu[len1-5];
			if(zi%mu==0)
			{
				printf("%I64d\n",zi/mu);
				continue;
			}
			else
			huajian(zi,mu,s);		//oktest ok
			
		}
		else if(a[len1-1]!=')') 		//0.5 形式 
		{
			for(i=len1-1;i>=2;i--)
			{
				e=(a[i]-'0');
				for(w=0,q=1;w<j;w++)
				{
					q*=10;
				}
				num+=(q*e);
				j++;
			}
			zi=num;
			mu=1+jiu[len1-3];
			if(zi%mu==0)
			{
				printf("%I64d\n",zi/mu);
				continue;
			}
			else
			huajian(zi,mu,s); 	//test ok
		}         
		else			//0.32(692307) 形式 
		{
		//先是不循环部分 k为记录不循环部分的数字长度 zi1 mu1是不循环的分数表示 
			for(i=len1-1;a[i]!='(';)
			{
				i--;
				continue;
			}
			i--;
			 for(k=0;i>=2;i--)
			 {
				e=(a[i]-'0');
				for(w=0,q=1;w<j;w++)
				{
					q*=10;
				}
				num+=(q*e);
				j++;
				k++;
			}
			zi1=num;
			mu1=jiu[k-1]+1;
						//	printf("%I64d  %I64d\n",zi1,mu1);test ok
			/////下面开始计算循环部分 k是不循环的部分 循环部分的长度用h表示
			num=0;
			j=0;
			h=0;
			for(i=len1-2;i>k+2;i--)
			{
				e=(a[i]-'0');
				for(w=0,q=1;w<j;w++)
				{
					q*=10;
				}
				num+=(q*e);
				j++;
				h++;
			}
		//printf("%I64d\n",num); test ok
			zi2=num;
			mu2=jiu[h-1];
			for(i=0;i<k;i++)
			{
				mu2*=10;
			}
		//	printf("%I64d\n",mu2);test ok
			zi=zi1*mu2+zi2*mu1;
			mu=mu1*mu2;
			huajian(zi,mu,s); 
		}                 
		                                         
		                                         
		                                         
  	}                                       
} 

void huajian(__int64 a,__int64 b,__int64 s[])
{
	int i,j,k;
	for(i=0;i<2000;)
	{
		if(a%s[i]==0&&b%s[i]==0)
		{
			a/=s[i];
			b/=s[i];
			continue;
		}
		i++;
	} 
	printf("%I64d/%I64d\n",a,b);
	
}                                         