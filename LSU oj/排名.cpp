#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
struct grade
{
	char name[100];
	int score;
};
bool cmp(const grade &a,const grade &b)
{
	if(a.score!=b.score)
		return a.score>b.score;
	else
		return a.name<b.name;
}
grade x[200001];
int main()
{
	int a,zu;
	while(scanf("%d",&zu)!=EOF)
	{
		for(a=0;a<zu;a++)
	{	
		scanf("%s%d",x[a].name,&x[a].score);
	}
	sort(x,x+zu,cmp);
	for(a=0;a<zu;a++)
	{
		printf("%s\n",x[a].name);
	}
	}
}