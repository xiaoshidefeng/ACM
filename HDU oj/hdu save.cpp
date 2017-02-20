#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int zu,zhon,i,zhon2,j,v,c,money;
	int a[101][101];
	int x[101];	
	while((scanf("%d",&c))!=EOF){
	if(c==0)
	break;
	scanf("%d",&zhon);
	money=0;
		zhon2=zhon;
		while(zhon2--){
			scanf("%d%d",&a[zhon2][0],&a[zhon2][1]);
		}
		for(j=0;j<zhon;j++){
		for(i=1;i<zhon-1-j;i++){
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
	
		for(i=1;a[i][1]<c;i++){
			x[i]=a[i][0]*a[i][1];
			c=c-a[i][1];		
		}
	
		x[i]=c*a[i][0];		
		for(;i>=1;i--){
			money=money+x[i];
		}
		printf("%d\n",money);
	}
}