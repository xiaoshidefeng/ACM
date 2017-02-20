#include<stdio.h>
#include<string.h>
char a[51];
int main()
{
	int i,len1,n,x1,x2,x3,x4;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",a);
		len1=strlen(a);
		
		if(len1<8||len1>16)
		{
			printf("NO\n");
			continue;
		}
		
		x1=x2=x3=x4=0;
		for(i=0;i<len1;i++)
		{
			if(x1==0&&(a[i]>=65&&a[i]<=90))
			x1=1;
			else if(x2==0&&(a[i]>=97&&a[i]<=122))
			x2=1;
			else if(x3==0&&(a[i]>=48&&a[i]<=57))
			x3=1;
			else if(x4==0&&((a[i]>=35&&a[i]<=37)||a[i]==33||a[i]==64||a[i]==94||a[i]==126))
			x4=1;
		}
		if(x1+x2+x3+x4>=3)
		printf("YES\n");
		else
		printf("NO\n");
	}
}