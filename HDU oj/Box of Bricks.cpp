#include<stdio.h>
int main()
{
	int a[101];
	int zu,hi,b,num,zu1,ave,zhuan,i,j;
	j=0;
	while(scanf("%d",&zu)!=EOF){
		num=0;
		zhuan=0;		
		zu1=zu;
		j++;
		if(zu==0)
			break;
		while(zu--){
			scanf("%d",&a[zu]);
			num=num+a[zu];
		}			
		ave=num/zu1;
		for(i=0;i<zu1;i++){
			if(a[i]>ave)
				zhuan=zhuan+a[i]-ave;	
		}
		//printf("Set #%d\n",j);
		printf("%d\n",zhuan);
		printf("\n"); 
	}
}