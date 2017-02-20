#include<stdio.h>
__int64 p[20000]={0};
__int64 a[20000]={0};
int main()
{
	__int64 zu,zi1,zi2,mu1,mu2,zi,mu,m,i,c,num;
	 __int64 h,k=0;
	 //素数表 
	 for(i=1;i<20000;i++)
     a[i]=i+1;
   for(i=0;i<20000;i++)
     if(a[i]!=0)
       {
         p[k]=a[i];
         for(h=i;h<20000;h++)
           if(a[h]%p[k]==0)
            a[h]=0;
         k++;
       }
       //////////////////// 
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%I64d/%I64d %I64d/%I64d",&zi1,&mu1,&zi2,&mu2);
		
		
		//printf("%I64d/%I64d %I64d/%I64d",zi1,mu1,zi2,mu2); 
		
		/*for(i=0;i<200;)
			{
				//printf("%I64d/%I64d\n",zi,mu);
				if(zi1%p[i]==0&&mu1%p[i]==0)
				{
					zi1/=p[i];
					mu1/=p[i];
					continue;
				}
				i++;
			}
			for(i=0;i<200;)
			{
				//printf("%I64d/%I64d\n",zi,mu);
				if(zi2%p[i]==0&&mu2%p[i]==0)
				{
					zi2/=p[i];
					mu2/=p[i];
					continue;
				}
				i++;
			}
		*/
		zi1=zi1*mu2;
		zi2=zi2*mu1;
		mu=mu1*mu2;
		
		//求 公倍数
		i=zi1*zi2;
		if(zi1<zi2){
			c=zi1;
			zi1=zi2;
			zi2=c;
		}
		while(zi1%zi2!=0){
			c=(zi1%zi2);
			zi1=zi2;
			zi2=c;
		}
		zi=i/zi2;	
		/////// 测试正确 
		//printf("%I64d\n",zi/mu);
		
		if(zi%mu==0)
		{
			printf("%I64d\n",zi/mu);
			continue;
		}
		else
		{
			for(i=0;i<2000;)
			{
				//printf("%I64d/%I64d\n",zi,mu);
				if(zi%p[i]==0&&mu%p[i]==0)
				{
					zi/=p[i];
					mu/=p[i];
					continue;
				}
				i++;
			}
			printf("%I64d/%I64d\n",zi,mu);
		}
	}
}