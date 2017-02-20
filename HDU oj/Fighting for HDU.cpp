#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
	int zu,zu2,hdu,hai,x,y;
	int a[101];
	int b[101];
	while(scanf("%d",&zu)!=EOF){
		if(zu==0)
			break;
		x=0;
		y=0;	
		zu2=zu;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		while(zu2--){
			scanf("%d",&a[zu2]);
		}
		zu2=zu;
		while(zu2--){
			scanf("%d",&b[zu2]);
		}
		sort(a,a+zu);
		sort(b,b+zu);
		while(zu--){
			if(a[zu]>b[zu])
				x=x+2;
			else if(a[zu]<b[zu])
				y=y+2;
			else{
				y++;
				x++;
			}
		}
		printf("%d vs %d\n",x,y);		
	}
	return 0;
} 