#include<stdio.h>
#include<string.h>
float a[1110][2];
int main()
{
	int zu,i,j,zhon,zhon2;
	float v,money,ci,zon;
	float x[2000];
	///////////////��ʼ�� 
	scanf("%d",&zu);
	while(zu--){
		ci=0; 
		zon=0;
		memset(a,0,sizeof(a));
		memset(x,0,sizeof(x));
		scanf("%f%d",&money,&zhon);
	//////////////����
		for(zhon2=zhon-1;zhon2>=0;zhon2--){
			scanf("%f%f",&a[zhon2][0],&a[zhon2][1]);
		}			
	/////////////���� ��ȷ 
		for(j=0;j<zhon;j++){
				for(i=0;i<zhon-1-j;i++){
					if(a[i][0]<a[i+1][0]){
                v=a[i][0];
                a[i][0]= a[i+1][0];
                a[i+1][0]= v;      
                v=a[i][1];
                a[i][1]= a[i+1][1];
                a[i+1][1]= v;
            	}
       		 }		
		}
	//printf("%f",a[0][0]);    test
	/////////////̰��1
		for(i=zhon-1;a[i][0]*a[i][1]<money;i--){  //���ĳһ����ȫ�� 
			zon=zon+a[i][1];
			money=money-a[i][0]*a[i][1];
			a[i][1]=0;
			if(i<=0)
			break;
		}
		if(a[0][1]==0){
			printf("%.2f\n",zon);	
		}
	////////////̰��2
		else{
			zon=zon+money/a[i][0];		 //���Ǯ���ж� �� ������� 
			printf("%.2f\n",zon);
		} 
		
	}
	return 0;
}
