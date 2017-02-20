#include<stdio.h>
#include<string.h>
char name[101][11];

//search函数 
int search(char *s)
{
 int i;
 for(i=1;name[i][0];i++)
 	{
  	if(strcmp(s,name[i])==0) return i;
 	}
 strcpy(name[i],s);
 return i;
}


//主函数 
int main()
{
 int N,M;
 int total[101];
 char t1[11],t2[11],t3[11];
 int t4;
 int from,to,cnt;
 memset(total,0,sizeof(total));//初始化 
 memset(name,0,sizeof(name));
 scanf("%d",&N);
 while(N--)
 {
  	scanf("%s%s",t1,t2);
  	
  	//判断动作 
  	if(strcmp(t2,"gets")==0)
  {
   	from=0;
   	to=search(t1);
   	scanf("%d%s",&cnt,t1);
  }
  else if(strcmp(t2,"eats")==0)
  {
   	from=search(t1);
   	to=0;
   	scanf("%d%s",&cnt,t1);
  }
  else
  {
   	scanf("%s",t3);
   	from=search(t1);
   	to=search(t3);
   	scanf("%d%s",&cnt,t1);
  }
  //判断结束
   
  total[from]-=cnt;
  total[to]+=cnt;
 }
 scanf("%d",&M);
 while(M--)
 {
  	scanf("%s",t1);
  	printf("%d\n",total[search(t1)]);
 }
}