#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int zu,zhi,zhon,shen,shen2,i,zhon2,j,v;
	int a[31][31];
	
	scanf("%d",&zu);
	while(zu--){
		scanf("%d",&zhon);
		zhon2=zhon;
		while(zhon2--){
			scanf("%d%d",&a[zhon2][0],&a[zhon2][1]);
		}//////////////////������ȷ  next ���� ð�� 
		for(j=0;j<zhon;j++){
		for(i=0;i<zhon-1-j;i++){
			if(a[i][0]>a[i+1][0]) 										//��ǰ��ıȺ���Ĵ��򽻻���
            {
                v=a[i][0];
                a[i][0]= a[i+1][0];
                a[i+1][0]= v;
                ////////
                v=a[i][1];
                a[i][1]= a[i+1][1];
                a[i+1][1]= v;
            	}
       		 }		
		}
		
		//////////////////������� next shuchu
				
			for(i=0;i<zhon;i++){
				shen=a[i][0];
				zhi=a[i][1];
				shen=shen-2;		
			while(zhi--){
				shen2=shen;
				printf(">+");
				while(shen2--)
					printf("-");				
				printf("+>\n");				
				} 
			printf("\n"); 		
			}
	
		}
}