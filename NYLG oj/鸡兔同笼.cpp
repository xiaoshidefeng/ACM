#include<stdio.h>
int main (void)
{
	int ji,tu,jiao,num,i,q;
	printf("ʹ�÷���:\nһ������������ �ֱ���������� �� �ŵĸ�������2�� ��4�ţ�"); 
	scanf("%d",&i);
	while(i--!=0){
		scanf("%d",&num);
		scanf("%d",&jiao);
		tu=(jiao-2*num)/2;
		ji=num-tu;
		if(ji<0||tu<0||jiao%2==1)
			
			printf("No answer\n");
		else	
            printf("%d %d\n",ji,tu);
	}
	
	return 0;
}