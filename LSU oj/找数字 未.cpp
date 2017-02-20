#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int a[2001];
int main()
{
    int n,h,l,m=12,f=1,j=0,i,right,left,mid;
    scanf("%d",&h);
    for(i=0;i<h;i++)
    {	scanf("%d",&a[j]);
        while(getchar()!='\n')
        {	j++;
        	scanf("%d",&a[j]);
        }
		j++;
    	
    }
    //printf("%d %d\n",a[0],a[j-1]);
	sort(a,a+j-1);
   // printf("%d %d\n",a[0],a[j-1]);
    scanf("%d",&n);
    mid=j/2;
    if(n==a[j-1])
    {
    	printf("YES\n");
    	return 0;
    }
    else if(n==a[0])
    {
    	printf("YES\n");
    	return 0;
    }
    while(m--)
    {	if(n==a[mid])
    	break;
    	else if(n>a[mid])
    	mid=(mid+j)/2;
    	else
    	mid=mid/2;
    }
    if(n==a[mid])
    printf("YES\n");
    else
    printf("NO\n");
}