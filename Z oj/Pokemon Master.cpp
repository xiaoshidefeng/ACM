#include<stdio.h>   
#include<string.h>  
#include<stdlib.h>  
#include<math.h>    
#include<algorithm> 
using namespace std;
int main()          
{                   
	 int sum1,sum2,n,m,zu,i,j,s,c;
	 scanf("%d",&zu);  
	 while(zu--)       
	 {                 
	 	scanf("%d%d",&n,&m);
	 	sum1=sum2=0;     
	 	for(i=0;i<n;i++) 
	 	{                
 			  scanf("%d",&c);
			  sum1+=c;       
	 	}                
	 	for(j=0;j<m;j++) 
	 	{                
	 		scanf("%d",&s); 
	 		sum2+=s;        
	 	}                
	 	if(sum1>sum2)    
	 	printf("Calem\n");
	 	else if(sum1<sum2)
	 	printf("Serena\n");
	 	else             
	 	printf("Draw\n");
	 }
}