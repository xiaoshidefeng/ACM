#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

struct node{
	int s;
	int plus;
}ans[100000];

struct A{
	int a;
	int b;
}rec[1000];


void init(){
	for(int i=0;i<100000;i++){
		ans[i].s=0;
		ans[i].plus = 0;
	}
}

int cmp(node a, node b){
	return a.s > b.s;
}

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int n,A,B;
	cin>>n>>A>>B;
	init();
	for(int i=0;i<n;i++){
		scanf("%d%d",&rec[i].a,&rec[i].b);		
	}
	int flag=0;	
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
//			if(!(rec[i].a > A || rec[j].a>A || rec[i].b>B||rec[j].b>B)) {
			int fir,sec;
			fir=rec[i].a+rec[j].a;
			sec=max(rec[i].b,rec[j].b);
			
//			printf("fir:%d sec:%d A:%d B:%d\n",fir,sec,A,B);
			
			if((fir<=A && sec<=B) || (fir<=B && sec<=A)){
				ans[flag].plus = fir*sec;
				ans[flag].s = rec[i].a*rec[i].b+rec[j].a*rec[j].b;
//				printf("%d %d %d\n",fir,sec,ans[flag].s);
				flag++;
			}
			fir = max(rec[i].a,rec[j].a);
			sec = rec[i].b+rec[j].b;
//			printf("fir:%d sec:%d A:%d B:%d\n",fir,sec,A,B);
			if((fir<=A && sec<=B) || (fir<=B && sec<=A)){
				ans[flag].plus = fir*sec;
				ans[flag].s = rec[i].a*rec[i].b+rec[j].a*rec[j].b;
//				printf("%d %d %d\n",fir,sec,ans[flag].s);
				flag++;
			} 
			fir=rec[i].a+rec[j].b;
			sec=max(rec[i].b,rec[j].a);
//			printf("fir:%d sec:%d A:%d B:%d\n",fir,sec,A,B);
			if((fir<=A && sec<=B) || (fir<=B && sec<=A)){
				ans[flag].plus = fir*sec;
				ans[flag].s = rec[i].a*rec[i].b+rec[j].a*rec[j].b;
//				printf("%d %d %d\n",fir,sec,ans[flag].s);
				flag++;
			}
			fir = max(rec[i].a,rec[j].b);
			sec = rec[i].b+rec[j].a;
//			printf("fir:%d sec:%d A:%d B:%d\n",fir,sec,A,B);
			if((fir<=A && sec<=B) || (fir<=B && sec<=A)){
				ans[flag].plus = fir*sec;
				ans[flag].s = rec[i].a*rec[i].b+rec[j].a*rec[j].b;
//				printf("%d %d %d\n",fir,sec,ans[flag].s);
				flag++;
			} 
//			}
			
			
		}
		
	sort(ans,ans+flag,cmp);
	printf("%d\n",ans[0].s);
}

