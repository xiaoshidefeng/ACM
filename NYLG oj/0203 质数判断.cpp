#include<stdio.h>
int main(void)
{
	int num,a,b;
	printf("���������������������������ж�������������������������\n");
	printf("ʹ��˵����\n");
	printf("����һ������2�������󰴻س�������֪�������Ƿ���������\n"); 
	printf("���� q �˳�����\n"); 
	b=1;
	while(scanf("%d",&num)==1){
		while(num<=2){
			printf("�ܺ��� ���������2������\n");
			scanf("%d",&num);	
			}
			
		
		for(a=2;a*a<=num;a++){
			b=0;
			if(num%a==0){
				
			
					b=0;
				printf("%d �������������ܱ�%d �� %d ����\n",num,a,num/a);
			}
		}
	if(b==1)
		printf("%d������\n",num);	
		
	}
	printf("see you\n");
	getchar ();
	return 0;
	
	
	
}