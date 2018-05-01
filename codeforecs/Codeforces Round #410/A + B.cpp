#include<bits/stdc++.h>
using namespace std;
const long long N = 1e13+7;
int x = 0;
int main(){
	int n , m;
	while(~scanf("%d%d", &n, &m)) {
//	while(cin>>n>>m){

		for (int i = 0; i < N; i++){
			++x;
		}
		printf("%d\n", n + m);
	}
}
