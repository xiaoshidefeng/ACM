#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
char a[5000];
char b[5000];
int  sum[20000];
int q[5000];
int w[5000]; 
int main()
{
	int i,j,num,zu,zu1,len1,len2,c,x;
	scanf("%d",&zu);
	for(zu1=1;zu1<=zu;zu1++)
	{
		scanf("%s",a);
		scanf("%s",b);
		len1=strlen(a);
		for(i=0;i<len1;i++)
		q[i]=a[i]-'0';
		len2=strlen(b);
		for(i=0;i<len2;i++)
		w[i]=b[i]-'0';
		i=len1;
		j=len2;
		x=0;
		memset(sum,0,sizeof(sum));
		if(len1<=len2)
		{
			j--;
			x=0;
			c=0;
			for(i=i-1;i>=0;i--,j--)
			{
				sum[x]=(q[i]+w[j]+c)%10;
				c=(q[i]+w[j]+c)/10;
				x++;
			}
			for(;j>=0;j--)
			{
				sum[x]=(w[j]+c)%10;
				c=(w[j]+c)/10;
				x++;
			}
			if(c>0)
			{
				sum[x]=c;
			printf("Case %d:\n",zu1);
			printf("%s + %s = ",a,b);
			for(x=x;x>0;x--)
			printf("%d",sum[x]);
			printf("%d\n",sum[0]);
			if(zu1<zu)
			printf("\n");
			continue;
			}
			//sum[x]=c;
			printf("Case %d:\n",zu1);
			printf("%s + %s = ",a,b);
			for(x=x-1;x>0;x--)
			printf("%d",sum[x]);
			printf("%d\n",sum[0]);
			if(zu1<zu)
			printf("\n");
		}
		else
		{
			i--;
			x=0;
			c=0;
			for(j=j-1;j>=0;i--,j--)
			{
				sum[x]=(q[i]+w[j]+c)%10;
				c=(q[i]+w[j]+c)/10;
				x++;
			}
			for(;i>=0;i--)
			{
				sum[x]=(q[i]+c)%10;
				c=(q[i]+c)/10;
				x++;
			}
			if(c>0)
			{
				sum[x]=c;
				printf("Case %d:\n",zu1);
			printf("%s + %s = ",a,b);
			for(x=x;x>0;x--)
			printf("%d",sum[x]);
			printf("%d\n",sum[0]);
			if(zu1<zu)
			printf("\n");
			continue;
			}
			printf("Case %d:\n",zu1);
			printf("%s + %s = ",a,b);
			for(x=x-1;x>0;x--)
			printf("%d",sum[x]);
			printf("%d\n",sum[0]);
			if(zu1<zu)
			printf("\n");
		}
		
	}
	
}