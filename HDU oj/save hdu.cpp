#include<stdio.h>
#include<string.h>

int main()
{
	int zu,zhon,i,zhon2,j,v,c,money;
	int a[101][101];
	int x[101];	
	while((scanf("%d%d",&c,&zhon))!=EOF){
	if(c==0)
	break;
	money=0;
		zhon2=zhon;
		while(zhon2--){
			scanf("%d%d",&a[zhon2][0],&a[zhon2][1]);
		}//////////////////输入正确  next 排序 冒泡 
		for(j=0;j<zhon;j++){
		for(i=0;i<zhon-1-j;i++){
			if(a[i][0]<a[i+1][0]) 										//如前面的比后面的大，则交换。
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
		//////////////////////
		///////////////////// 贪心
	
		for(i=0;a[i][1]<c;i++){
			x[i]=a[i][0]*a[i][1];
			c=c-a[i][1];
		
		}
		if(i<zhon)
		x[i]=c*a[i][0];
		
		for(;i>=0;i--){
			money=money+x[i];
		}
		printf("%d\n",money);
	}
}