#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int zu,zhi,zhon,shen,shen2,i,zhon2;
	int a[31][31];
	
	scanf("%d",&zu);
	while(zu--){
		scanf("%d",&zhon);
		zhon2=zhon;
		while(zhon--){
			scanf("%d%d",&a[zhon][0],&a[zhon][1]);
			
		}
		for(i=0;i<zhon2;i++)
		printf("%d    %d\n",a[i][0],a[i][1]);
		
	}	
}