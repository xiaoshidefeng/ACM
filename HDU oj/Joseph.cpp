#include<stdio.h>
typedef struct Triplet{
	int e1;
	int e2;
	int e3;
}Triplet;
void InitTriplet(Triplet t,int v1,int v2,int v3)

{

      t.e1=v1;

      t.e2=v2;

      t.e3=v3;

}

void Maxs(Triplet t)

{

    

}

int main()

{

   int a,b,c,max;

   Triplet t;

   scanf("%d%d%d",&t.e1,&t.e2,&t.e3);
	if(t.e1>t.e2){
    	printf("NO\n");
    }else if(t.e2>t.e3){
    	printf("NO\n");
    }else{
    	printf("YES\n");
    }
   //InitTriplet(t,a,b,c);

   //Maxs(t);

   

}
