#include<stdio.h>
#include<time.h>
int main(void)
{
	int i;
	time_t t; 
	i=0;
	while(i<10000)
	{t=time(NULL);char *time;//定义一个字符串用来保存获取到的日期和时间
	time=ctime(&t);//赋值
	printf("%s",time);
	i=i+1;}	//输出就可以了
	getchar();
}
