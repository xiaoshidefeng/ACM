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
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int pt[10001];
int vis[10001];
int a,b;

struct bs{
	int val,bu;
};

void bfs()
{
	int ge,shi,bai,qian;
	queue<bs>q;
	bs temp1,temp2;
	temp1.val=a;
	temp1.bu=0;
	vis[temp1.val]=1;
	q.push(temp1);
	while(!q.empty())
	{
		temp1=q.front();
		//printf("%d\n",temp1.val);
		
		if(temp1.val==b)
		{
			printf("%d\n",temp1.bu);
			break;
		}
		q.pop();
		++temp1.bu;
		
		temp2=temp1;
		temp2.val=(temp2.val/10)*10;
		for(ge=0;ge<=9;ge+=2)
		{
			
			if(pt[temp2.val]&&!vis[temp2.val])
			{
				q.push(temp2);
				vis[temp2.val]=1;
			}
		 	++temp2.val;
		}
		
		temp2=temp1;
		ge=temp2.val%10;
		temp2.val=(temp2.val/100)*100+ge;
		for(shi=0;shi<=9;shi++)
		{
			
			if(pt[temp2.val]&&!vis[temp2.val])
			{
				q.push(temp2);
				vis[temp2.val]=1;
			}
			temp2.val+=10;
		}
		
		temp2=temp1;
		shi=(temp2.val%100);
		temp2.val=(temp2.val/1000)*1000+shi;
		for(bai=0;bai<=9;bai++)
		{
			
			if(pt[temp2.val]&&!vis[temp2.val])
			{
				q.push(temp2);
				vis[temp2.val]=1;
			}
			temp2.val+=100;
		}
		
		
		temp2=temp1;
		bai=temp2.val%1000;
		temp2.val=bai+1000;
		for(qian=0;qian<=9;qian++)
		{
			
			if(pt[temp2.val]&&!vis[temp2.val])
			{
				q.push(temp2);
				vis[temp2.val]=1;
			}
			temp2.val+=1000;
		}
	}
	if(temp1.val!=b)
		printf("Impossible\n");
	
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	//freopen("f:/output.txt", "w", stdout);
	CLR(pt,1);
	pt[2]=1;
	for(int i=2;i<10000;i++)
	{
		if(pt[i])
		{
			for(int j=i*i;j<10000;j+=i)
			{
				pt[j]=0;
			}
		}
	}
	int zu;
	scanf("%d",&zu);
	while(zu--)
	{
		CLR(vis,0);
		scanf("%d%d",&a,&b);
		if(a==b)
		{
			printf("0\n");
			continue;
		}
		bfs();
	}
	
	 
	
}