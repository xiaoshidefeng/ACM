#include<stdio.h>
int main(void)
{
	int zu,a,c,zon,ji;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d",&a);
			zon=0;
			if(a%2==0){
				for(c=1,ji=1;a>c;c=c+2){
					ji=ji*c;
					zon=zon+ji;
					}
					zon=zon*2;
					printf("%d\n",zon);
				}
			else {
				for(c=1,ji=1;a>=c;c=c+2){
					ji=ji*c;
					zon=zon+ji;
					}
					zon=zon*2-ji;
					printf("%d\n",zon);
				}
		}
}