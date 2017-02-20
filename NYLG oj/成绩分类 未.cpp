#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4,e1,e2,e3,e4,a,b,c,d,
	 e,temp,i,j,w,r;
	int q[5];
	scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
	scanf("%d%d%d%d",&b1,&b2,&b3,&b4);
	scanf("%d%d%d%d",&c1,&c2,&c3,&c4);
	scanf("%d%d%d%d",&d1,&d2,&d3,&d4);
	scanf("%d%d%d%d",&e1,&e2,&e3,&e4);
	printf("%d\n",(a1+a2+a3+a4+b1+b2+b3+b4+c1+c2+c3+c4+d1+d2+d3+d4+e1+e2+e3+e4)/5);
	a=(a1+a2+a3+a4);
	b=(b1+b2+b3+b4);
	c=(c1+c2+c3+c4);
	d=(d1+d2+d3+d4);
	e=(e1+e2+e3+e4);
	q[0]=a;
	q[1]=b;
	q[2]=c;
	q[3]=d;
	q[4]=e;
		for(j=0;j<4;j++){
		for(i=0;i<5-1-j;i++){
			if(q[i]<q[i+1]){
				temp=q[i];
				q[i]=q[i+1];
				q[i+1]=temp;
			}
		}
	}
	w=q[3];
	r=q[4];
	if((a1+a2+a3+a4)==w)
		printf("%d %d %d %d %d\n",a1,a2,a3,a4,w);
	if((b1+b2+b3+b4)==w)
		printf("%d %d %d %d %d\n",b1,b2,b3,b4,w);
	if((c1+c2+c3+c4)==w)
		printf("%d %d %d %d %d\n",c1,c2,c3,c4,w);
	if((d1+d2+d3+d4)==w)
		printf("%d %d %d %d %d\n",d1,d2,d3,d4,w);
	if((e1+e2+e3+e4)==w)
		printf("%d %d %d %d %d\n",e1,e2,e3,e4,w);
		
	if((e1+e2+e3+e4)==r)
		printf("%d %d %d %d %d\n",e1,e2,e3,e4,r);
	if((d1+d2+d3+d4)==r)
		printf("%d %d %d %d %d\n",d1,d2,d3,d4,r);
	if((c1+c2+c3+c4)==r)
		printf("%d %d %d %d %d\n",c1,c2,c3,c4,r);
	if((b1+b2+b3+b4)==r)
		printf("%d %d %d %d %d\n",b1,b2,b3,b4,r);
	if((a1+a2+a3+a4)==r)
		printf("%d %d %d %d %d\n",a1,a2,a3,a4,r);
		
		return 0;
}