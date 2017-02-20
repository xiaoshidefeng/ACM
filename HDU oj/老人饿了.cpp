#include<stdio.h>
#include<string.h>
int a[111][111];
int main()
{
	int zu,i,money,zhon,zhon2,j,v;
	float zon,money2,y;
	int x[100];
	scanf("%d",&zu);
	while(zu--){
		zon=0;
		memset(a,0,sizeof(a));
		memset(x,0,sizeof(x));
		scanf("%d%d",&money,&zhon);
		zhon2=zhon;
		for(zhon2=zhon2-1;zhon2>=0;zhon2--)
			scanf("%d%d",&a[zhon2][0],&a[zhon2][1]);
			
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
		
		for(i=zhon-1;a[i][0]*a[i][1]<money;i--){
			x[i]=a[i][1];
			money=money-a[i][0]*a[i][1];
		}
		money2=(float)money;
		//printf("%d\n",money);
		j=a[i][0];
		y=(float)j;
		//printf("%d\n",a[i][0]);
		//printf("%f\n",j);
		zon=money2/y;
		for(;i>=0;i--){
			zon=zon+x[i];
		}
		printf("%.2f\n",zon);			
		} 
	}
