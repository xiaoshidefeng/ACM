#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	
	char ch[15];
	int i,j,k;
	string s;
	set<string>ss;
	while(scanf("%s",ch)!=EOF)
	{
		s=ch;
		ss.insert(s);
	}
	set<string>::iterator it;
	for(it=ss.begin();it!=ss.end();it++) 
    cout<<*it<<endl;
}