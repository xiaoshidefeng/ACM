#include<stdio.h>
#include<string.h>
int main()
{
	int zu,zhon,i,zhon2,j,v,c,money;
	int a[111][111];
	int x[1000];	
	while((scanf("%d",&c))!=EOF){
	if(c==0)
	break;
	scanf("%d",&zhon);
	money=0;
	memset(x,0,sizeof(x));
	memset(a,0,sizeof(a));
	zhon2=zhon;
		for(zhon2=zhon2-1;zhon2>=0;zhon2--){
			scanf("%d%d",&a[zhon2][0],&a[zhon2][1]);
		}
		for(j=0;j<zhon;j++){
		for(i=0;i<zhon-1-j;i++){
			if(a[i][0]<a[i+1][0]) 									
            {
                v=a[i][0];
                a[i][0]= a[i+1][0];
                a[i+1][0]= v;      
                v=a[i][1];
                a[i][1]= a[i+1][1];
                a[i+1][1]= v;
            	}
       		 }		
		}	
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