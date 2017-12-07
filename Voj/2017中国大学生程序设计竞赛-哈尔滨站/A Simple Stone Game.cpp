#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int a[100001];
int ab[100001];
int ib[100001];
int vis[100001];

int checkGCD(int a, int b) {
	int t = b%a;
	while(t) {
		b = a;
		a = t;
		t = b%a;
	}
	return a;
}


int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int m,i,j,k,sum,e,ma,cnt,fla;
	int summi = 0,si=0;
	int summa = 0,sa=0;
	int sumneed = 0;
	scanf("%d",&m);
	while(m--) {
		CLR(a, 0);
		CLR(vis, 0);
		ma = 0;
		sum=0;
		scanf("%d",&k);
		for(i=0;i<k;i++) {
			scanf("%d", &a[i]);
			sum += a[i];
			if(a[i] > ma) ma = a[i];
		}
		e = sqrt(sum);
		cnt = 500001;
		fla = 1;
		
		if (k==2){
			printf("0\n");
			continue;
		}
		
		for(i=2;i<=e; i++) {
			//int temp = checkGCD(i,sum);
			if((sum%i) == 0) {
				//printf("%d",sum-ma);		
				int halfi = i/2;
				summi = 0,si=0;
				summa = 0,sa=0;
				sumneed = 0;
				for(j=0; j < k;j++) {
					int nowmod = a[j]%i;
					if (nowmod <= halfi) {
						summi += nowmod;
						ib[si] = nowmod;
						++si;
					} else {
						summa += nowmod;
						sumneed = sumneed + (i - nowmod);
						ab[sa] = nowmod;
						++sa;
					}
				}
				if (summi == sumneed) {
					if (cnt > summi) cnt = summi; 
					fla = 0;
				} else if (summi > sumneed) {
					//printf("summi > sumneed + %d\n", i);
					int micnt = (summi - sumneed)/i;
					int c,ssi=0;
					sort(ib, ib + si);
					for(int w = si-1,c = micnt;c >= 0; c--) {
						ssi += ib[w];
						--w;
					}
					//int x = summi - sumneed - ssi + sumneed;
					int x = summi - ssi;
					if (x < cnt) cnt = x;
					fla = 0;
				} else {
					//printf("summi < sumneed %d\n", i);
					int macnt = (sumneed - summi)/i;
					int c,ssa=0;
					sort(ab,ab + sa);
					//for(int w = 0;w < macnt; w++) {
				//		ssa += ab[w];
				//	}
					for(int w = sa - 1,c=macnt;c <=0;c--) {
						ssa += ab[w];
						--w;
					}
					//int x = sumneed - summi + ssa;
					int x = summi + (macnt*i - ssa);
					if (x < cnt) cnt = x;
					fla = 0;
				}
				
			}
		}
		if (!fla) {
			printf("%d\n",cnt);
		} else {
			printf("%d\n", sum - ma);	
		}

	}
}

