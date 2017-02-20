#include<stdio.h>
int main(void)
{
	int nian,yue,ri,tian,zu;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&zu);
	while(zu--){
		scanf("%d%d%d",&nian,&yue,&ri);
		yue=yue-2;
		if((nian%400)==0||(nian%4)==0&&(nian%100)!=0){			
			for(tian=0;yue>=0;yue--){
			tian=b[yue]+tian;					
			}
		}
		else{
			for(tian=0;yue>=0;yue--){
			tian=a[yue]+tian;				
			}
		}
		tian=tian+ri;
	printf("%d\n",tian);
	}
} 