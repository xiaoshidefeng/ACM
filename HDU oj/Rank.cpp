#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
typedef struct ranks{
	int ids;
	int score;	
}rank;
bool cmp(const ranks &a,const ranks &b){
	return a.score>b.score;
}
int main()
{
	ranks r[10011];
	int jackson,i,j,x;
	while(scanf("%d",&jackson)!=EOF)
	{
		i=0;
		while(scanf("%d%d",&r[i].ids,&r[i].sco re)!=EOF)
		{
			if(r[i].ids==0&&r[i].score==0)
			break;
			if(r[i].ids==jackson)
			x=r[i].score;
			i++;
		}
		sort(r,r+i,cmp);
	//	printf("%d %d",r[i].ids,r[i].score);
		for(j=0;j<i;j++)
		{
			
			if(r[j].score==x)
			{	
				printf("%d\n",j+1);
				break;
			}
		}
	}
}