#include<stdio.h>
#include<time.h>
int main(void)
{
	int i;
	time_t t; 
	i=0;
	while(i<10000)
	{t=time(NULL);char *time;//����һ���ַ������������ȡ�������ں�ʱ��
	time=ctime(&t);//��ֵ
	printf("%s",time);
	i=i+1;}	//����Ϳ�����
	getchar();
}
