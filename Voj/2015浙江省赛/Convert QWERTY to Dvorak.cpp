#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

string c;

int main()
{
	int len1,i,j,k,n,m;
	//freopen("f:/input.txt", "r", stdin);
	//freopen("f:/output.txt", "w", stdout);
	while(getline(cin,c))
	{
		len1=c.length();
		for(i=0;i<len1;i++)
		{
			if(c[i]=='_')
			{
				c[i]='{';
				continue;
			}
			if(c[i]=='-')
			{
				c[i]='[';
				continue;
			}
			
			if(c[i]=='+')
			{
				c[i]='}';
				continue;
			}
			if(c[i]=='=')
			{
				c[i]=']';
				continue;
			}
			
			if(c[i]=='Q')
			{
				c[i]='"';
				continue;
			}
			if(c[i]=='q')
			{
				c[i]='\'';
				continue;
			}
			
			if(c[i]=='W')
			{
				c[i]='<';
				continue;
			}
			if(c[i]=='w')
			{
				c[i]=',';
				continue;
			}
			
			if(c[i]=='E')
			{
				c[i]='>';
				continue;
			}
			if(c[i]=='e')
			{
				c[i]='.';
				continue;
			}
			
			if(c[i]=='R')
			{
				c[i]='P';
				continue;
			}
			if(c[i]=='r')
			{
				c[i]='p';
				continue;
			}
			
			if(c[i]=='T')
			{
				c[i]='Y';
				continue;
			}
			if(c[i]=='t')
			{
				c[i]='y';
				continue;
			}
			
			if(c[i]=='Y')
			{
				c[i]='F';
				continue;
			}
			if(c[i]=='y')
			{
				c[i]='f';
				continue;
			}
			
			if(c[i]=='U')
			{
				c[i]='G';
				continue;
			}
			if(c[i]=='u')
			{
				c[i]='g';
				continue;
			}
			
			if(c[i]=='I')
			{
				c[i]='C';
				continue;
			}
			if(c[i]=='i')
			{
				c[i]='c';
				continue;
			}
			
			if(c[i]=='O')
			{
				c[i]='R';
				continue;
			}
			if(c[i]=='o')
			{
				c[i]='r';
				continue;
			}
			
			if(c[i]=='P')
			{
				c[i]='L';
				continue;
			}
			if(c[i]=='p')
			{
				c[i]='l';
				continue;
			}
			
			if(c[i]=='{')
			{
				c[i]='?';
				continue;
			}
			if(c[i]=='[')
			{
				c[i]='/';
				continue;
			}
			
			if(c[i]=='}')
			{
				c[i]='+';
				continue;
			}
			if(c[i]==']')
			{
				c[i]='=';
				continue;
			}
			
			if(c[i]=='S')
			{
				c[i]='O';
				continue;
			}
			if(c[i]=='s')
			{
				c[i]='o';
				continue;
			}
			
			if(c[i]=='D')
			{
				c[i]='E';
				continue;
			}
			if(c[i]=='d')
			{
				c[i]='e';
				continue;
			}
			
			if(c[i]=='F')
			{
				c[i]='U';
				continue;
			}
			if(c[i]=='f')
			{
				c[i]='u';
				continue;
			}
			
			if(c[i]=='G')
			{
				c[i]='I';
				continue;
			}
			if(c[i]=='g')
			{
				c[i]='i';
				continue;
			}
			
			if(c[i]=='H')
			{
				c[i]='D';
				continue;
			}
			if(c[i]=='h')
			{
				c[i]='d';
				continue;
			}
			
			if(c[i]=='J')
			{
				c[i]='H';
				continue;
			}
			if(c[i]=='j')
			{
				c[i]='h';
				continue;
			}
			
			if(c[i]=='K')
			{
				c[i]='T';
				continue;
			}
			if(c[i]=='k')
			{
				c[i]='t';
				continue;
			}
			
			if(c[i]=='L')
			{
				c[i]='N';
				continue;
			}
			if(c[i]=='l')
			{
				c[i]='n';
				continue;
			}
			
			if(c[i]==':')
			{
				c[i]='S';
				continue;
			}
			if(c[i]==';')
			{
				c[i]='s';
				continue;
			}
			
			if(c[i]=='"')
			{
				c[i]='_';
				continue;
			}
			if(c[i]=='\'')
			{
				c[i]='-';
				continue;
			}
			
			if(c[i]=='Z')
			{
				c[i]=':';
				continue;
			}
			if(c[i]=='z')
			{
				c[i]=';';
				continue;
			}
			
			if(c[i]=='X')
			{
				c[i]='Q';
				continue;
			}
			if(c[i]=='x')
			{
				c[i]='q';
				continue;
			}
			
			if(c[i]=='C')
			{
				c[i]='J';
				continue;
			}
			if(c[i]=='c')
			{
				c[i]='j';
				continue;
			}
			
			if(c[i]=='V')
			{
				c[i]='K';
				continue;
			}
			if(c[i]=='v')
			{
				c[i]='k';
				continue;
			}
			
			if(c[i]=='B')
			{
				c[i]='X';
				continue;
			}
			if(c[i]=='b')
			{
				c[i]='x';
				continue;
			}
			
			if(c[i]=='N')
			{
				c[i]='B';
				continue;
			}
			if(c[i]=='n')
			{
				c[i]='b';
				continue;
			}
			
			if(c[i]=='<')
			{
				c[i]='W';
				continue;
			}
			if(c[i]==',')
			{
				c[i]='w';
				continue;
			}
			
			if(c[i]=='>')
			{
				c[i]='V';
				continue;
			}
			if(c[i]=='.')
			{
				c[i]='v';
				continue;
			}
			
			if(c[i]=='?')
			{
				c[i]='Z';
				continue;
			}
			if(c[i]=='/')
			{
				c[i]='z';
				continue;
			}
			
		}
		cout<<c<<endl;
		//printf("%s\n",c);
	}
}