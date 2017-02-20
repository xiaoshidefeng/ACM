#include<stdio.h>
#include<string.h>
char ch[2000];
int main()
{
    char a,b,c;    
    float gread,sum,i;
    while(~scanf("%s",ch)!=NULL){   	  
      c=1;
      i=0;
      gread=0;
//第一次判断      
      if((strcmp(ch,"A"))==0){
	  	i++;
        gread+=4;}
      else if((strcmp(ch,"B"))==0){
	  	i++;
        gread+=3;}       
      else if((strcmp(ch,"C"))==0){
      	i++;
        gread+=2;}       
      else if((strcmp(ch,"D"))==0){
	  	i++;
       	gread+=1;}        
      else if((strcmp(ch,"F"))==0){
	  	i++;
      	gread+=0;}       
      else if((strcmp(ch," "))!=0){
	  	i++;      
        c=0;}
//第二次及以后的判断            
      while(scanf("%c",&ch)!=EOF){
        if(*ch=='\n')
        break;        
      if((strcmp(ch,"A"))==0){
	  	i++;
        gread+=4;}
      else if((strcmp(ch,"B"))==0){
	  	i++;
        gread+=3;}       
      else if((strcmp(ch,"C"))==0){
      	i++;
        gread+=2;}       
      else if((strcmp(ch,"D"))==0){
	  	i++;
       	gread+=1;}        
      else if((strcmp(ch,"F"))==0){
	  	i++;
      	gread+=0;}       
      else if((strcmp(ch," "))!=0){
	  	i++;      
        c=0;}
      }
      if(c!=0)
        printf("%.2f\n",gread/i);
      else if(c==0){
      	printf("Unknown letter grade in input\n");
      }       
    }
    return 0; 
}