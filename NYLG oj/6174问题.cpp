#include<stdio.h>
int main(void)
{
	int zu,a[4],num,max,min,qian,bai,shi,ge,j,i,temp,x;
	scanf("%d",&zu);
	while(zu--){
	x=1;
	scanf("%d",&num);
	while(num!=6174){
		qian=num/1000;
		bai=(num%1000)/100;
		shi=(num%100)/10;
		ge=num%10;
		int a[4]={qian,bai,shi,ge};
		for(j=0;j<4;j++){
		for(i=0;i<3-j;i++){
			if(a[i]<a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
		max=a[0]*1000+a[1]*100+a[2]*10+a[3];
		min=a[3]*1000+a[2]*100+a[1]*10+a[0];
		num=max-min;
		x++;
	}
	printf("%d\n",x);
	}
	return 0;
}