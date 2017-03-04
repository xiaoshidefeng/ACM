#include <stdio.h>
int main()
{
	
	int zu,a,b,c,d;
	char x[3];
	scanf("%d",&zu);
	while(zu--)
	{
		scanf("%d",&a);
		getchar();
		scanf("%c",&x[1]);
		scanf("%d",&b);
		getchar();
		scanf("%c",&x[2]);
		scanf("%d",&c);
		
		//++
		if(x[1]=='+'&&x[2]=='+')
		{
			printf("%d\n",a+b+c);
			continue;
		}
		//+-
		if(x[1]=='+'&&x[2]=='-')
		{
			printf("%d\n",a+b-c);
			continue;
		}
		
		//+*
		if(x[1]=='+'&&x[2]=='*')
		{
			printf("%d\n",a+b*c);
			continue;
		}
		
		//+/
		if(x[1]=='+'&&x[2]=='/')
		{
			printf("%d\n",a+b/c);
			continue;
		}
		
		//+%
		if(x[1]=='+'&&x[2]=='%')
		{
			printf("%d\n",a+b%c);
			continue;
		}
		
		//-1
		if(x[1]=='-'&&x[2]=='+')
		{
			printf("%d\n",a-b+c);
			continue;
		}
		
		//--
		if(x[1]=='-'&&x[2]=='-')
		{
			printf("%d\n",a-b-c);
			continue;
		}
		
		//-*
		if(x[1]=='-'&&x[2]=='*')
		{
			printf("%d\n",a-b*c);
			continue;
		}
		
		//-/
		if(x[1]=='-'&&x[2]=='/')
		{
			printf("%d\n",a-b/c);
			continue;
		}
		
		//-%
		if(x[1]=='-'&&x[2]=='%')
		{
			printf("%d\n",a-b%c);
			continue;
		}
		
		//*+
		if(x[1]=='*'&&x[2]=='+')
		{
			printf("%d\n",a*b+c);
			continue;
		}
		
		//*-
		if(x[1]=='*'&&x[2]=='-')
		{
			printf("%d\n",a*b-c);
			continue;
		}
		
		//**
		if(x[1]=='*'&&x[2]=='*')
		{
			printf("%d\n",a*b*c);
			continue;
		}
		
		//*/
		if(x[1]=='*'&&x[2]=='/')
		{
			printf("%d\n",a*b/c);
			continue;
		}
		
		//*%
		if(x[1]=='*'&&x[2]=='%')
		{
			printf("%d\n",a*b%c);
			continue;
		}
		
		///+
		if(x[1]=='/'&&x[2]=='+')
		{
			printf("%d\n",a/b+c);
			continue;
		}
		
		///-
		if(x[1]=='/'&&x[2]=='-')
		{
			printf("%d\n",a/b-c);
			continue;
		}
		
		///*
		if(x[1]=='/'&&x[2]=='*')
		{
			printf("%d\n",a/b*c);
			continue;
		}
		
		////
		if(x[1]=='/'&&x[2]=='/')
		{
			printf("%d\n",a/b/c);
			continue;
		}
		
		///%
		if(x[1]=='/'&&x[2]=='%')
		{
			printf("%d\n",a/b%c);
			continue;
		}
		
		//%+
		if(x[1]=='%'&&x[2]=='+')
		{
			printf("%d\n",a%b+c);
			continue;
		}
		
		//-
		if(x[1]=='%'&&x[2]=='-')
		{
			printf("%d\n",a%b-c);
			continue;
		}
		
		//*
		if(x[1]=='%'&&x[2]=='*')
		{
			printf("%d\n",a%b*c);
			continue;
		}
		
		///
		if(x[1]=='%'&&x[2]=='/')
		{
			printf("%d\n",a%b/c);
			continue;
		}
		
		//%
		if(x[1]=='%'&&x[2]=='%')
		{
			printf("%d\n",a%b%c);
			continue;
		}
		//printf("%d %c %d %c %d\n",a,x[1],b,x[2],c);
	}
	
	return 0;
}