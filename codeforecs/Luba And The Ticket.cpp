#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

char a[10];
int s[10];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	scanf("%s",a);
	int yi,er,san,si,wu,liu,i,j,k,n,a1,a2,aa,step,f,aaa;
	yi = a[0] - '0';
	er = a[1] - '0';
	
	san = a[2] - '0';
	si = a[3] - '0';
	
	wu = a[4] - '0';
	liu = a[5] - '0';
	
	for(i=0;i<6;i++){
		s[i] = a[i] - '0';
		//printf("%d " ,s[i]);
	}
	//sort(s,s+3);
	//sort(s+3,s+6);
	
	a1 = yi+er+san;
	a2 = si +wu + liu;
	f=0;
	
	if(a1==a2) {
		
		printf("0\n");
		return 0;
	}else if (a1 > a2) {
		
		aa = a1 - a2;

		for(i=0;i<3;i++){
			if(s[i]-aa>=0){
				f=1;
				printf("1\n");
				return 0;
			}
		}
		 
		for(i=3;i<6;i++){
			if(s[i]+aa<=9){
				f=1;
				printf("1\n");
				return 0;
			}
		}
		
		for(i=0;i<3;i++){
			aaa=aa-(s[i]);
			for(j=0;j<3;j++){
				if(i==j) continue;
				
				if(aaa-s[j]<=0){
				f=1;
				printf("2\n");
				return 0;
				}
			}
		}
		
		for(i=3;i<6;i++){
			aaa=aa-(9-s[i]);
			for(j=3;j<6;j++){
				if(i==j) continue;
				
				if(s[j]+aaa<=9){
				f=1;
				printf("2\n");
				return 0;
				}
			}
		}
		
		printf("3\n");
		
		
	}else if (a2 > a1) {
		aa= a2 - a1;
		
		for(i=3;i<6;i++){
			if(s[i]-aa>=0){
				f=1;
				printf("1\n");
				return 0;
			}
		}
		 
		for(i=0;i<3;i++){
			if(s[i]+aa<=9){
				f=1;
				printf("1\n");
				return 0;
			}
		}
		
		for(i=3;i<6;i++){
			aaa=aa-(s[i]);
			for(j=3;j<6;j++){
				if(i==j) continue;
				
				if(aaa-s[j]<=0){
				f=1;
				printf("2\n");
				return 0;
				}
			}
		}
		
		for(i=0;i<3;i++){
			aaa=aa-(9-s[i]);
			for(j=0;j<3;j++){
				if(i==j) continue;
				
				if(s[j]+aaa<=9){
				f=1;
				printf("2\n");
				return 0;
				}
			}
		}
		
		printf("3\n");
	}

}