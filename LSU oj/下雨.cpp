#include<stdio.h>
#include<string.h>
int main()
{
	char x,y;
	char a[550][550];
	char dis[10];
	int num,zu,bu,k,g,k2,g2;
	scanf("%d",&zu);
	while(zu--){
		scanf("%d%d",&k,&g);
		for(g2=0;g2<g;g2++){
			scanf("%s",a[g2]);
		}		
		scanf("%d",&bu);
		num=0;
		k=0;
		g--;
		if(a[g][k]=='.')
			num++;
		while(bu--){
			scanf("%s",dis);
			if(strcmp(dis,"up")==0)
				g--;
			else if(strcmp(dis,"down")==0)
				g++;
			else if(strcmp(dis,"right")==0)
				k++;
			else if(strcmp(dis,"left")==0)
				k--;			
			if(a[g][k]=='.')
				num++;
		}
		printf("%d\n",num);		
	}
	return 0;
}
