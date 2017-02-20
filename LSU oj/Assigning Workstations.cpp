#include <stdio.h>
int main()
{
	long long n,m,a,a0;
	int s,s0,t=0;
	scanf("%lld%lld",&n,&m);
	n--;
	scanf("%lld%d",&a,&s);
	a0=a;
		s0=s;
	while(n--){
		scanf("%lld%d",&a,&s);
		if(a0+s0+m>=a)t++;
		a0=a;
		s0=s;
	}
	printf("%d\n",t);
}
