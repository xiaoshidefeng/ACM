#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void)
{
	int i;
	int chenwei[10]={10,9,8,7,6,5,4,3,2,1};
	for(i=0;i<10;i++)
	printf("%d ",chenwei[i]);
	printf("\n");
	sort(chenwei,chenwei+10);
	for(i=0;i<10;i++)
	printf("%d ",chenwei[i]);
	printf("\n");
	
} 