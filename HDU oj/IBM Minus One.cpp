#include<stdio.h>
#include<string.h>
char a[1000]; 
int main()
{
	char ch;
	int zu,i,j,lon;
	scanf("%d",&zu);
	j=0;
	getchar();
	while(zu--){	
		j++;		
		scanf("%s",a);
		lon=strlen(a);
		for(i=0;i<lon;i++){
			if(a[i]=='Z')
				a[i]='A';
			else
				a[i]=a[i]+1;			
		}
			printf("String #%d\n",j);
			printf("%s\n",a);
			printf("\n");		
	}
}