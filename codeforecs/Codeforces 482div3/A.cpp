#include<bits/stdc++.h>
using namespace std;
int a[55];
int b[55];
int flag[1005];
int main()
{
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}	
	
	int foot=0;
	for(int i=n-1;i>=0;i--){
		if(flag[a[i]]!=0)continue;
		flag[a[i]]++;
		b[foot++]=a[i];
	}
	printf("%d\n",foot);
	printf("%d",b[foot-1]);
	for(int i=foot-2;i>=0;i--){
		printf(" %d",b[i]);
	}
	return 0;
}
