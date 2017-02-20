#include<stdio.h>
#include<string>

int main()

{
	int n,n2,m,m2,chang1,chang2;
	int chang[10001];
	char name[101][11];
	char who[101][11];
	char a,b;	
	char thing[10001][20];
	char num1[101][100];
	char num2[101][100];
	char candies[1000]; 
	scanf("%d",&n);
	n2=n;
	while(n2--){        ////事件 48-57 是数字0-9的码 
		scanf("%s",who[n2]);
		scanf("%s",thing[n2]);
		//gives gets eats分开 
		if(strcmp(thing[n2],"get")==0){
			scanf("%s",num1[n2]);
		}
		else if(strcmp(thing[n2],"eats")==0){
			scanf("%s",num1[n2]);
		}
		else if(strcmp(thing[n2],"gives")==0){
			scanf("%s",num1[n2]);
			scanf("%s",num2[n2]);
		}
		
		scanf("%s",candies);
		//chang[n2]=strlen(thing[n]);
	}for(;n2<n;n2++)
	printf("%s    %s        %s    %s\n",who[n2],thing[n2],num1[n2],num2[n2]);
	/////////////////
	scanf("%d",&m);
	m2=m;
	
	while(m2--){
		scanf("%s",name[m2]);
		
	}
} 