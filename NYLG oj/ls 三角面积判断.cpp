#include<stdio.h>
#include<math.h>

int main(void)
{
    
	float a,b,c,s,area,zu;
    zu=1; 
    while(zu++){
		scanf("%f%f%f",&a,&b,&c);
		if(a==0&&b==0&&c==0)
			break;
    	if((a+b>c)&&(a+c>b)&&(b+c>a)&&a>0&&b>0&&c>0){  	 	
    
    	printf("YES\n");
	    }
		else
			printf("NO\n");
    
    }
   
}
