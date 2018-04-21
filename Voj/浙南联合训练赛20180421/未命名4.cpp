#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

#define MAX 100000
long long su[MAX],cnt;  
bool isprime[MAX];  
void prime()  
{  
    cnt=1;  
    memset(isprime,1,sizeof(isprime));
    isprime[0]=isprime[1]=0;
    for(long long i=2;i<=MAX;i++)  
    {  
        if(isprime[i])  
            su[cnt++]=i;
        for(long long j=1;j<cnt&&su[j]*i<MAX;j++)  
        {  
            isprime[su[j]*i]=0;
        }  
    }  
}  

vector<int> v;

void pri(int ac) {
	int vs = v.size();
	for (int x = 0 ; x < vs; x ++) printf("%d ", v[x]);
	printf("%d\n", ac);
}

int main(){

	//freopen("f:/input.txt", "r", stdin); 
	int a,b,i,j,k;
	
	scanf("%d%d", &a, &b);
	prime(); 
	if (b == 1) {
		cout<<a<<endl;
		return 0;
	}
	for (i = 1; i < cnt; i ++) {
		if (su[i] == a) {
			cout<<-1<<endl;
			return 0;
		}
	}
	if (a < pow(2, b)) {
		cout<<-1<<endl;
		return 0;
	}
	
	int cnt2 = 0;
//	for (i = 0 ; i < b - 1; i ++) {
		for (j = 1; j < cnt; j ++) {
			while (a % su[j] == 0) {
				++cnt2;
				v.push_back(su[j]);
				a /= su[j];
				if (cnt2 == b - 1 && a > 1) {
					pri(a);
					return 0;
				} 
			}
			
		}
		if (cnt2 < b - 1) {
			cout<<-1<<endl;
		}
//	}
}
